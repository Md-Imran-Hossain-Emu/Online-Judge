#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)
                cnt += a[i][j];
        }
    }
    int cnt2=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1)
                cnt2 += a[i][j];
        }
    }
    cout << abs(cnt-cnt2) << endl;
}
