#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int j=i;
        while(j--)
            cout << "*";
        cout << endl;
    }
}
