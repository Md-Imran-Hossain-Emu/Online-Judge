#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
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
    int n,k;
    cin >> n >> k;
    int a=2,b=5,c=8;
    a *= n;
    b *= n;
    c *= n;
    a += k-1;
    b += k-1;
    c += k-1;
    a /= k;
    b /= k;
    c /= k;
    cout << a+b+c << endl;
}
