#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> v = {2, 3, 5, 5, 7, 7, 1};

    sort(v.begin(), v.end());                        // n * log n
    int sz = unique(v.begin(), v.end()) - v.begin(); // o(n)

    for (int i = 0; i < sz; i++)
    {
        cout << v[i] << " ";
    }

    vector<int>::iterator it = max_element(v.begin(), v.end());
    cout << endl
         << *it << endl;
    cout << endl
         << sz << endl;

    // find the index of max element
    int index = max_element(v.begin(), v.end()) - v.begin(); // 4
}