#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int n1 = 1e8 + 5;
string cf = "codeforces";

int32_t main()
{
    IOS;
    int k;
    cin >> k;
    int cnt=1;
    vector<int>v(cf.length(),1);
    for(int i=0;cnt<k;i++){
        int j = i%cf.length();
        cnt /= v[j];
        v[j]++;
        cnt *= v[j];
    }

    for(int i=0;i<cf.length();i++){
        for(int j=0;j<v[i];j++){
            cout << cf[i];
        }
    }
}
