#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 105;

int a[N], result[N];

void toSolve(int left, int right, int level)
{
    if(left > right)
        return;
    int pos = left;
    for(int i=left; i<=right; i++){
        if(a[i] > a[pos])
            pos = i;
    }
    result[pos] = level;
    toSolve(left, pos-1, level+1);
    toSolve(pos+1, right, level+1);
}

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
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    toSolve(1,n,0);
    for(int i=1;i<=n;i++)
        cout << result[i] << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
