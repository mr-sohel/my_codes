/**
 *	Author:  Sohel Rana
 *	Date:    2022-02-21 21:18:04
 *	Task:    B_Avoid_Local_Maximums 
**/
#include <bits/stdc++.h>
#define endl		'\n'
#define sqr(x)		(x) * (x)
#define gcd(x,y)	__gcd(x, y)
#define lcm(x,y)	((x/gcd(x,y)) * y)
#define pf(x)		push_front(x)
#define pb(x)		push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)		(x).begin(), (x).end()
#define rall(x)		(x).rbegin(), (x).rend()
#define sz(x)		(int)x.size()
#define prec(x) 	fixed<<setprecision(x)
#define debug(x)	cerr<<#x<<" = "<<(x)<< endl
#define debug2(x,y)	cerr<<#x<<" = "<<(x)<<","<<#y<<" = "<<(y)<< endl
#define unsyncIO	ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld)-1);
const int mod = 1e9+7;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e5;

using namespace std;


int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    unsyncIO;
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n;i++) cin >> a[i];
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i - 1] and a[i] > a[i + 1]) {
                if (i  <= n - 3) {
                    a[i + 1] = max(a[i], a[i + 2]);
                } else
                    a[i + 1] = a[i];
                ans++;
            }
        }
        cout << ans << endl;
        for (int i = 0; i < n;i++) cout << a[i] << ' ';
        cout << endl;

    }
    return 0;
}