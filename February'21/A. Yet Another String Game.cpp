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
    string s;
    cin >> s;
    string t = s;
    int n = s.size();

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(s[i] == 'a')
                t[i] = 'b';
            else
                t[i] = 'a';
        }
        else{
            if(s[i] == 'z')
                t[i] = 'y';
            else
                t[i] = 'z';
        }
    }
    cout << t << endl;
}

///Must see the constraints range
///Calculate the Time
