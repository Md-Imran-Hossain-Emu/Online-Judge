#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
}

void solve()
{
    int n;
    cin >> n;
    int e=0,o=0,ans=0,cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0)
            e++;
        if(x%2==1)
            o++;
        if(x%2 != i%2)
            cnt++;
    }
    if(o==n/2)
        ans=cnt/2;
    else
        ans = -1;
    cout << ans << endl;
}
