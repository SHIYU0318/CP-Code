#include<bits/stdc++.h>
using namespace std;
#define int long long
#define ShiYu ios_base::sync_with_stdio(0);cin.tie(0)
#define YN(x) cout << (x ? "YES" : "NO") << "\n"

signed main()
{
    ShiYu;
    int t; cin >> t;
    int a,b;
    while(t--)
    {
        cin >> a >> b;
        bool c = ((a + b) % 3 == 0 && 2 * min(a,b) >= max(a,b));
        YN(c);
    }
}