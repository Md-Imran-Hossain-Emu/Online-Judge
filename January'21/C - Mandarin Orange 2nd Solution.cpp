#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

int getMaxArea(int hist[], int n)
{
    stack<int> s;

    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < n){
        if (s.empty() || hist[s.top()] <= hist[i])
            s.push(i++);

        else{
            tp = s.top();
            s.pop();

            area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    return max_area;
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

//    int b[n];
//    for(int i=0;i<n;i++)
//        b[i] = a[i];
//    sort(b, b+n);
//    int mx = *max_element(a, a+n);
//
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;){
//            int sum = 0;
//            while(b[i]<=a[j] && j<n){
//                sum += b[i];
//                j++;
//            }
//            mx = max(mx, sum);
//            j++;
//        }
//    }
//    cout << mx << endl;

    cout << getMaxArea(a,n) << endl;
}

///Must see the constraints range
///Calculate the Time
