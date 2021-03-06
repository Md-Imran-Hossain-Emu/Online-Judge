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
    int n,a,b,x;
    cin >> n >> a >> b >> x;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0'){
            if(a<=b+x)
                cnt += a;
            else
                cnt += b + x;
        }
        else{
            if(b<=a+x)
                cnt += b;
            else
                cnt += a + x;
        }
    }
    cout << cnt << endl;
}
