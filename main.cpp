#include <iostream>
#include "vector"

int main() {

    std::vector<std::vector<int>> v(10, std::vector<int>(10));

    for (auto & i : v)
        for (auto j = 0; j < i.size(); j++)
            i[j] = j;


    for (auto & i : v) {
        for (auto j = 0; j < i.size(); j++) {
            i[j] = j;
            std::cout << i[j] << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
