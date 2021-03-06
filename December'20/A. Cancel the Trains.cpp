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
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    int a[105] = {0};
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        a[x]++;
    }
    int cnt = 0;
    for(int i=0;i<105;i++){
        if(a[i]>1)
            cnt++;
    }
    cout << cnt << endl;
}
