#include <bits/stdc++.h>
using namespace std::chrono;

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

    v1.assign({67, 68, 69});

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

    for (auto i = v1.begin(); i != v1.end(); i++) std::cout << *i << " "; std::cout << std::endl;

    v3.push_back(4);

    std::cout << "Ёмкость вектора v3 (capacity) = " << v3.capacity() << std::endl;

    auto ndec = v1.cend(); // Возвращает указатель \n

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v1.crbegin(); i != v1.crend(); i++) std::cout << *i << " "; std::cout << std::endl;

    v1.clear(); // удаляет все элементы в векторе v1

    std::vector<int> v4 = {11, 12, 13, 14, 15};

    v4.erase(v4.cbegin(), v4.cbegin() + 1); // Удаляет элементы массива в заданном диапазоне

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v4.cbegin(); i != v4.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    std::cout << "Размер вектора v1 = " << v4.size() << std::endl;

    int *p = v4.data(); std::cout << *p << std::endl; // Возвращает указатель на первый элемент

    std::vector<int> v5; if (v5.empty()) std::cout << "Пустой !" << std::endl;

    v5.swap(v4); // v5 = v4 : копирует содержимое одного вектора в другой

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v5.cbegin(); i != v5.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    v5.resize(3); // Устанавливает новый размер вектора

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v5.cbegin(); i != v5.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    v5.resize(8, 1); // Устанавливает новый размер вектора (если больше увеличивает значения)

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v5.cbegin(); i != v5.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    std::vector<int> v6;

    std::cout << "Размер вектора v6 = " << v6.size() << std::endl;

    v6.reserve(1); // Резервирует память (это необходимо т.к. увеличивает скорость обращения к элементам вектора !)

    std::cout << "Размер вектора v6 = " << v6.size() << std::endl;
    std::cout << "Ёмкость вектора v6 (capacity) = " << v6.capacity() << std::endl;

    v6.push_back(1);
    v6.push_back(1);
    v6.push_back(1);

    std::cout << "Размер вектора v6 = " << v6.size() << std::endl;
    std::cout << "Ёмкость вектора v6 (capacity) = " << v6.capacity() << std::endl;

    v6.emplace(v6.cbegin() + 2, 22);

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v6.cbegin(); i != v6.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

     auto start = high_resolution_clock::now();

    v6.insert(v6.cbegin(), 5);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);

    std::cout << "Method I took " << duration.count() << " microseconds\n";

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v6.cbegin(); i != v6.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    v.resize(10);

    std::vector<int> v7 = {1, 2, 3, 4, 5, 6, 7,};

    std::cout << v7.max_size() << std::endl;

    for (int i = 0; i < v.size(); i++) v[i] = i;

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v.cbegin(); i != v.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    v.insert(v.begin() + 4, v7.begin(), v7.end()); // вставляет элементы с указанной позиции

    // crbegin() <-> crend() - указатели в обратном порядке !
    for (auto i = v.cbegin(); i != v.cend(); i++) std::cout << *i << " "; std::cout << std::endl;

    std::cout << v7.size() << std::endl;

    for (auto i : v7) std::cout << i << " "; std::cout << std::endl;

    v7.push_back(8);

    for (auto i : v7) std::cout << i << " "; std::cout << std::endl;

    std::cout << v7.capacity() << std::endl;

    v7.shrink_to_fit();

    std::cout << v7.capacity() << std::endl; // Сокращает емкость вектора до размера этого вектора

    return 0;
}
