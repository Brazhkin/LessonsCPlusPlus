#include <iostream>

class B;

class A {
private:
    friend class B;
    int a{0};
public:
    explicit A(int val) : a(val) {}

    [[nodiscard]] int quadA () const noexcept { return a * a; }

    int quadAtoB (B &clasB) const noexcept;
};

class B {
private:
    friend class A;
    int a{0};
public:
    explicit B(int val) : a(val) {}

    [[nodiscard]] int quadB () const noexcept { return a * a; }

    [[nodiscard]] int quadBtoA (A &clasA) const noexcept { return clasA.a * a; }
};

[[nodiscard]] int A::quadAtoB(B &clasB) const noexcept { return clasB.a * a; }

int main (int argc, char* argv[]) {

    A objA{8};
    B objB{7};

    int ret = objB.quadBtoA (objA);

    int ret1 = objA.quadAtoB (objB);

    std::cout << ret << " " << ret1 << std::endl;

    return 0;
}