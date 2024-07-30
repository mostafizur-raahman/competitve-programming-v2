#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> v;

    vector<int> v1 = {1,
                      2,
                      3};
    vector<int> v2 = {4, 5, 6};

    v.push_back(v1);
    v.push_back(v2);

    for (auto u : v)
    {
        for (auto g : u)
        {
            cout << g << " ";
        }
        cout << endl;
    }
}