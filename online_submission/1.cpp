#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int s = 0, d = 0, flag = 0;

    while (!v.empty())
    {
        if (flag == 0)
        {
            if( v[0] > v.back() ){
                s += v[0];
                v.erase(v.begin());
            }
            else {
                s += v.back();
                v.pop_back();
            }
            flag = 1;
        }
        else {
            if( v[0] > v.back() ){
                d += v[0];
                v.erase(v.begin());
            }
            else {
                d += v.back();
                v.pop_back();
            }
            flag = 0;
        }
    }

    cout << s << " " << d << "\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    solve();
}