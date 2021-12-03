/**
 *	Author:  Sohel Rana
 *	Date:    2021-11-28 18:57:27
 *	Task:    H. Help Dr. Wu 
**/
#include <bits/stdc++.h>
#define endl			'\n'
#define sqr(x)			(x) * (x)
#define gcd(x, y)		__gcd(x, y)
#define lcm(x, y)		((x/gcd(x,y)) * y)
#define pf(x) 	  		push_front(x)
#define pb(x)			push_back(x)
#define eb(x)			emplace_back(x)
#define all(x)      	(x).begin(), (x).end()
#define rall(x)			(x).rbegin(), (x).rend()
#define sz(x)			(int)x.size()
#define debug(x)		cerr << #x << " = " << (x) << endl
#define debug2(x,y) 	cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double			    db;
typedef long double		    ld;
typedef long long 		    ll;
typedef unsigned long long	ull;

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0e-14;
const int mx = 100002;

using namespace std;

ll summation[mx];
set<ll> st;

int main() 
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
   
    int t;
    cin >> t;
    while (t--) {
        ll i, n;
        cin >> n;
        vector<ll> a(n);
        for (i = 0; i < n;i++) {
            cin >> a[i];
        }
        st.insert(a[0]);
        for (int i = 0; i < n -1; i++) {
            st.insert(a[i+1] - a[i]);
        }       
        if (st.size() == n)
            cout << "Won" << endl;
        else
            cout << "Lost" << endl;
    }
    return 0;
}