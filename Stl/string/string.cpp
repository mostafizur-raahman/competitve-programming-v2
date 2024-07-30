#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define PI 3.141592653589793238462
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define nline "\n"
void solve()
{
    string str = "we thin000000000";
    cout << str.substr(3,5); // start with 3 and till next 5 char

    cout << str.find("thi") << nline;

    cout << str.substr(3, 1000) << nline;
}
int main()
{
    ios_base::sync_with_stdio(0);
    solve();
}