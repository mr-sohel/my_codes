/**
 *    Author:  Sohel Rana
 *    Date:    2020-10-22 19:37:58
 *	  Link:    link
**/
#include <bits/stdc++.h>
#define endl        '\n'
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
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

const ld PI = acos((ld)-1);
const int MOD = 1e9+7;
const ll INF = 1e18; 

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    //unsyncIO;
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        //cout<<s1<<" "<<s2<<endl;
        int j, i, count = 0;
        for (i = 0; i <= (int)s1.length() - (int)s2.length(); i++) {
            if (s2[0] == s1[i]) {
                for (j = 1; j < (int)s2.length(); j++) {
                    if (s2[j] != s1[i + j])
                        break;
                }
                if (j == sz(s2)) {
                    count++;
                    //break;
                }
            }
        }
        cout << count << endl;
    }        
    return 0;
}
