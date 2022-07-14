#include <iostream>
#include <vector>
#include <memory>
#include <cassert>
#include <functional>

struct B {
    virtual void bar() { std::cout << "B::bar\n"; }
    virtual ~B() = default;
};

struct D final : B
{
    D() { std::cout << "D::D\n";  }
    ~D() final { std::cout << "D::~D\n"; }
    void bar() override { std::cout << "D::bar\n";  }
};

std::unique_ptr<D> get_bar(std::unique_ptr<D> p) { p->bar(); return p; }

int main()
{
    std::cout << "Capture pointer" << std::endl;
    {
        std::unique_ptr x = std::make_unique<D>();
        std::unique_ptr<D> x1 = get_bar(std::move(x));
        assert(!x);
        x1->bar();
    } // ~ D

    std::cout << std::endl;

    std::cout << "Polymorphism" << std::endl;
    {
        std::unique_ptr<B> x1 = std::make_unique<D>();

        x1->bar();

        std::vector<std::unique_ptr<B>> v;

        v.push_back(std::make_unique<D>());
        v.push_back(std::move(x1));

        v.emplace_back(new D);

        for(auto& i: v) i->bar();
    } // ~ D (x3)

    std::cout << std::endl;

    std::cout << "Custom deleter demo\n";

    std::cout << "Custom lambda-expression deleter demo\n";
    {
        std::unique_ptr<D, std::function<void(D*)>> p(new D, [](D* ptr)
        {
            std::cout << "destroying from a custom deleter...\n";
            ptr->bar();
            delete ptr;
        });  // p владеет D
        p->bar();
    } // вызывается указанная выше лямбда и D уничтожается


    {
        std::unique_ptr<D[]> p{new D[3]};
    } // вызывает ~ D 3 раза*/
}