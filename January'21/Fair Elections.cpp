#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e5+5;
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
    int a[INF]={0LL}, b[INF]={0LL};
    int won = 0LL, loss = 0LL;
    for(int i=0;i<n;i++){
        cin >> a[i];
        won += a[i];
    }
    sort(a,a+n);

    for(int i=0;i<m;i++){
        cin >> b[i];
        loss += b[i];
    }
    sort(b,b+m,greater<int>());

    int cnt = 0;
    for(int i=0;i<min(n,m);i++){
        if(won > loss)
            break;
        else if(b[i]>a[i]){
            cnt++;
            won = won + b[i] - a[i];
            loss = loss - b[i] + a[i];
        }
        else
            break;
    }
    //cout << won << " " << loss << endl;

    if(loss >= won)
        cnt = -1;
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
