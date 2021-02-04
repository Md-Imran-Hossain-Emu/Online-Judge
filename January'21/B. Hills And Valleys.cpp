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
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int cnt2 = 0;
    for(int i=1;i<n-1;i++){
        if(a[i] > a[i+1] && a[i] > a[i-1])
            cnt2++;
        if(a[i] < a[i+1] && a[i] < a[i-1])
            cnt2++;
    }

    bool ok = true;
    for(int i=2;i<n-2;i++){
        if((a[i-2] < a[i-1] > a[i] < a[i+1] > a[i+1]) || (a[i-2] > a[i-1] < a[i] > a[i+1] < a[i+1])){
            a[i] = max(a[i-1], a[i+1]);
            ok = false;
            break;
        }
    }
    if(ok == true){
        for(int i=1;i<n-1;i++){
            if((a[i-1] > a[i] < a[i+1] > a[i+1]) || (a[i-1] < a[i] > a[i+1] < a[i+1])){
                a[i] = max(a[i-1], a[i+1]);
                ok = false;
                break;
            }
        }
    }
    if(ok == true){
        for(int i=1;i<n-1;i++){
            if((a[i] > a[i+1] && a[i] > a[i-1]) || (a[i] < a[i+1] && a[i] < a[i-1]))
                a[i] = max(a[i-1], a[i+1]);
        }
    }

    int cnt = 0;
    for(int i=1;i<n-1;i++){
        if(a[i] > a[i+1] && a[i] > a[i-1])
            cnt++;
        if(a[i] < a[i+1] && a[i] < a[i-1])
            cnt++;
    }

    cout << min(cnt, cnt2) << endl;
}

///Must see the constraints range
///Calculate the Time
