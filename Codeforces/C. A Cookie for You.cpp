#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;
const double pi = 3.141592653589793238;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n,m,a,b;
    cin >> a >> b >> n >> m;

    bool ok = true;
    if(a+b < m+n)
        ok = false;
    else if(min(a,b)<m)
        ok = false;

    if(ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
