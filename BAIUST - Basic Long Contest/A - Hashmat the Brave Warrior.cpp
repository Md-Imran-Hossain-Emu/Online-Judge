/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ll a,b;
    while( cin >> a >> b ){
        cout << max(a,b) - min(a,b) << endl;
    }
    return 0;
}

