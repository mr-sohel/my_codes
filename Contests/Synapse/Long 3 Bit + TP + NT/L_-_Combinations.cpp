#include <bits/stdc++.h>

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define pb            push_back
#define pf            push_front
#define mp            make_pair
#define fi            first
#define se            second
#define sz(x)         (long long)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using ll = long long;
using db = double;
using ld = long double;
using ull = unsigned long long;

const ld pi = acos((ld) - 1);
const int mod = 1000003;
const ll inf = 1e18;
const ld eps = 1e-9;
const int mx = 1e6 + 2;


using namespace std;


#ifndef ONLINE_JUDGE
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cout << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cout.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}
#else
#define debug(...)
#endif
ll BigMod(ll b, ll p, ll m) {if (p == 0) return 1; if (p % 2 == 0) {ll ret = BigMod(b, p / 2, m); return ((ret % m) * (ret % m)) % m;}{return ((b % m) * (BigMod(b, p - 1, m) % m)) % m;}}

ll fact[mx];

void pre() {
    int i;
    fact[0] = 1;
    for (i = 1; i < mx; i++) {
        fact[i] = ((fact[i - 1] % mod) * (i % mod) % mod);
    }
}


int main() {
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    unsyncIO;
    pre();
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        ll n, r, ans;
        cin >> n >> r;
        ll fact2 = ((fact[r] % mod) * (fact[n - r] % mod)) % mod;
        ans = ((fact[n] % mod ) * BigMod(fact2, mod - 2, mod)) % mod;
        cout << "Case " << i << ": " << ans << endl;
    }

#ifndef ONLINE_JUDGE
    fprintf(stderr, "\n>> Runtime: %.10Lf\n", (ld) (clock() - tStart) / CLOCKS_PER_SEC);
#endif
    return 0;
}