#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin >> n;
    int a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
        cin >> b[i];

    int c[m+n];

    sort(a,a+n);
    sort(b,b+m);

    int p = a[n-1];
    int q = b[m-1];

    cout << p << " " << q;
}
