#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==c || b==d)
        cout << abs(a-c) + abs(b-d) << endl;
    else
        cout << abs(a-c) + abs(b-d) + 2 << endl;
}
