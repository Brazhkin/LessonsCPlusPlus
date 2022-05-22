#include <iostream>
#include "vector"

int main() {

<<<<<<< HEAD
    cout <<3333333;

    std::vector<std::vector<int>> v(10, std::vector<int>(10));
=======
    using namespace std;

    cout << "111111";

    vector<int> v;

    void print_vector;
    print_vector = [&]() {
        for (char c: v)
            std::cout << c << ' ';
        std::cout << '\n';
    };
>>>>>>> BRAZHKIN

    for (auto & i : v)
        for (auto j = 0; j < i.size(); j++)
            i[j] = j;

    return 0;
}
