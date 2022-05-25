#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct print
{
    void operator()(int element)
    {
        cout << element << endl;
    }
};

cout << "4444444444444444444";

cout << "888";

int main(void)
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::for_each(v.begin(), v.end(), print());

    return 0;
}
