#include <iostream>
#include "vector"

int main() {

    using namespace std;

    cout << "111111";

    vector<int> v;

    auto print_vector = [&]() {
        for (char c: v)
            std::cout << c << ' ';
        std::cout << '\n';
    };

    for (auto & i : v)
        for (auto j = 0; j < v.size(); j++)
            i = j;

    return 0;
}
