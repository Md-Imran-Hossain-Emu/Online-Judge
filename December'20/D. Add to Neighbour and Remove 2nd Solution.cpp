#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
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
    int n;
    cin >> n;
    vector<int>a(n);
    int sum = 0;

    for(int &x:a){
        cin >> x;
        sum += x;
    }

    for(int k=n; k>0;k--){
        if(sum%k != 0)
            continue;

        int m = sum/k;
        bool ok = true;
        int temp = 0;

        for(int i=0;i<n;i++){
            temp += a[i];
            if(temp>m){
                ok = false;
                break;
            }
            else if(temp == m)
                temp = 0;
        }
        if(ok){
            cout << n-k << endl;
            return;
        }
    }
}

///Must see the constraints range
///Calculate the Time
