#include <bits/stdc++.h>

#define sqr(x)        (x) * (x)
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << tc++ << ": "
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

using namespace std;

using ll = long long;
using lll = __int128_t;
using ld = long double;
using ull = unsigned long long;
template <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

const ld PI = acos(-1.0);
const ll MOD = 1e9 + 7;
const ld EPS = 1e-9;
const int N = 2e5 + 5;
int tc = 1;

int n, a[N], Left[N], right[N];

void solve() {
   cin >> n;
   for (int i = 1; i <= n; i++) cin >> a[i];
   stack<int> leftStack, rightStack;

   leftStack.push(0);
   for (int i = 1; i <= n; i ++) {
      while (!leftStack.empty() and a[leftStack.top()] >= a[i]) {
         leftStack.pop();
      }
      debug(leftStack);
      Left[i] = leftStack.top();
      leftStack.push(i);
   }
   for (int i = 1; i <= n; i++) {
      cout << Left[i] << ' ';
   }
}

int main() {
   unsyncIO;

   int t = 1;
   cin >> t;
   while (t--) {
      solve();
   }
   return 0;
}