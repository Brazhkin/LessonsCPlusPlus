#include <iostream>
#include "vector"

int main() {

    using namespace std;

    cout << "111111";

    vector<int> v;

    cout << "Регистрация первого ключа !" << endl;
    
    void print_vector;
    print_vector = [&]() {
        for (char c: v)
            std::cout << c << ' ';
        std::cout << '\n';
    };

    for (auto & i : v)
        for (auto j = 0; j < i.size(); j++)
            i[j] = j;

    return 0;
}
