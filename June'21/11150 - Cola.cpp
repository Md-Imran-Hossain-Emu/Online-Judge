#include<bits/stdc++.h>
using namespace std;

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
    int n;
    while(cin >> n){
        int cnt = n;
        while(n>=3){
            cnt += n/3;
            n = n/3 + n%3;
        }
        if(n==2)
            cnt++;
        cout << cnt << endl;
    }
    return 0;
}
