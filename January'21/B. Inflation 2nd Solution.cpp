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
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    int tot = a[0];
    int cnt = 0;
    for(int i=1;i<n;i++){
        int temp = (100*a[i]+k-1)/k - tot;
        cnt = max(cnt, temp);
        tot += a[i];
    }

    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
