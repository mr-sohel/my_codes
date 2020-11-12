/**
 *	Author:  Sohel Rana
 *	Date:    2020-11-08 18:22:00
 *	Task:    B_Almost_GCD 
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b)
#define pf(x) 		push_front(x)
#define pb(x)       push_back(x)
#define eb(x)		emplace_back(x)
#define all(x)      (x).begin(), (x).end()
#define rall(x) 	(x).rbegin(), (x).rend()
#define sz(x) 		(int)x.size()
#define debug(x) 	cerr << #x << " = " << (x) << endl
#define debug2(x,y) cerr << #x << " = " << (x)<< "," << #y << " = " <<(y)<< endl
#define unsyncIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef double 			   db;
typedef long double 	   ld;
typedef long long 		   ll;
typedef unsigned long long ull;
const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const long long INF = 1e18;
const ld eps = 1.0E-14;
inline ld gett() { return clock() / ld (CLOCKS_PER_SEC); }

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    //ld stime = gett();
    int n;
    cin >> n;
    vector<int> v(n);
    ll cnt = 0;
    //vector<pair<ll, ll> > vs;
    for (int i = 0; i < n; i++) cin >> v[i];
    int maxx = -1, res;
    for (int i = 2; i <= 1000; i++) {
        for (int j = 0; j < n; j++) {
            if (v[j] % i == 0)
                cnt++;
        }
        if(cnt > maxx){
            maxx = cnt;
            res = i;
            cnt = 0;
        }
            // vs.pb(make_pair(cnt, i));
            // cnt = 0;
    }
    // sort(rall(vs));
    // // for (int i = 0; i < vs.size(); i++)
    // //     debug2(vs[i].first, vs[i].second);
    cout << res << endl;
    //cerr << "Time: " << gett() - stime << endl;
    return 0;
}