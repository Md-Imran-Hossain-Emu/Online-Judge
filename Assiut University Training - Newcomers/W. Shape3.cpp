#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        int m = 2*i - 1;
        for(int k=1;k<=m;k++)
            cout << "*";
        cout << endl;
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<=n-i;j++){
            cout << " ";
        }
        int m = 2*i - 1;
        for(int k=1;k<=m;k++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
