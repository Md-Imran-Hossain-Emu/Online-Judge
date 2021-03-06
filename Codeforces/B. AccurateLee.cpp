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
    string a;
    cin >> a;

    int i=0,j=n;
    while(i<n && a[i]=='0')
        i++;
    while(j>0 && a[j-1]=='1')
        j--;
    if(i==j)
        cout << a << endl;
    else
        cout << a.substr(0,i) + '0' + a.substr(j) << endl;
}
