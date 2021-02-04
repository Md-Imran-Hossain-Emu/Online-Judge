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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<m;i++)
        cin >> b[i];

//    sort(a, a+n);
//    sort(b, b+m);

    int cnt = 0, pos = 0;
    for(int i=0;i<n;i++){
        if(a[i]<=b[pos] && pos<m)
            cnt++, pos++;
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
