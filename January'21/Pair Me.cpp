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

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c || a+c==b || b+c==a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
