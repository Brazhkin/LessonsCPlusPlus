#include <bits/stdc++.h>

int main()
{
    std::vector<int> v(10), v1(10), v2;

    for (int i = 0; i < v.size(); i++) { v[i] = i; v1[i] = i; std::cout << i << " "; } std::cout << std::endl;

    v.assign(v.size(), 7); // Инициализация вектора v

    for (auto & i : v) std::cout << i << " "; std::cout << std::endl;

    v.assign(v1.begin(), v1.begin() + 3); // Инициализация вектора v и указание ему нового размера

    for (auto & i : v) std::cout << i << " "; std::cout << std::endl;

    std::cout << "Размер вектора v1 = " << v1.size() << std::endl;

    v2.assign({9, 8, 7, 6}); // Инициализация безразмерного вектора v2 !

    v.assign({9, 8, 7, 6, 5, 4, 3});

    std::cout << "Размер вектора v = " << v.size() << std::endl;

    std::cout << "Размер вектора v2 = " << v2.size() << std::endl;

    v1.assign({0, 5, 3});

    std::cout << "Размер вектора v1 = " << v1.size() << std::endl;

    v1.push_back(5); // Добавит элемент вектора в конец

    std::cout << "Размер вектора v1 = " << v1.size() << std::endl;

    std::cout << "Последний элемент вектора v1 = " << v1.back() << std::endl;

    std::cout << "Первый элемент вектора v1 = " << v1.front() << std::endl; // Возвращает первый элемент в векторе

    // begin() работает в связке, например, с end() !
    // cbegin - константный итератор
    for (auto i = v1.begin(); i != v1.end(); i++) std::cout << *i << " "; std::cout << std::endl;

    std::vector<int> v3(1);

    std::cout << "Ёмкость вектора v3 (capacity) = " << v3.capacity() << std::endl;

    v3.push_back(4);

    std::cout << "Ёмкость вектора v3 (capacity) = " << v3.capacity() << std::endl;

    auto ndec = v1.cend(); // Возвращает указатель \n

    for (auto i = v1.begin(); i < ndec; i++) std::cout << *i << " "; std::cout << std::endl;

    return 0;
}
