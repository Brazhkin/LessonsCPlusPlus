#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1;

    int a[] = { 1, 2, 3 };

    // assign first 2 values
    v1.assign(a, a + 2);

    cout << "Elements of vector1 are\n";

    for (auto & i : v1) cout << i << " ";

    vector<int> v2;

    // assign first 3 values
    v2.assign(a, a + 3);

    cout << "\nElements of vector2 are\n";

    for (auto & i : v2) cout << i << " ";

    return 0;
}
