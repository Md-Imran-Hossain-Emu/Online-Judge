#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int cnt = n/100;
    n %= 100;
    cnt += n/20;
    n %= 20;
    cnt += n/10;
    n %= 10;
    cnt += n/5;
    n %= 5;
    cnt += n;
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time