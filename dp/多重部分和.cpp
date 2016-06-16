//#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<string>
#include<sstream>
#include<cstdlib>
#include<cstring>
#include<cctype>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<vector>
#include<deque>
#include<cmath>
#include<climits>
#include<list>
#include<utility>
#include<memory>
#include<cstddef>
#include<iterator>
#include<iomanip>

using namespace std;
typedef long long LL;
typedef long double LD;
const double PI = acos(-1.0);
///////////////////////////////

const int MAX_N = 104;
const int MAX_K = 100009;

int n;
int k;
int a[MAX_N];
int m[MAX_N];

int dp[MAX_N];

void solve() {

	memset(dp, -1, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i<n; i++) {
		for (int j = 0; j <= k; j++) {
			if (dp[j] >= 0) {
				dp[j] = m[i];
			}
			else if (j<a[i] || dp[j - a[i]] <= 0) {
				dp[j] = -1;
			}
			else {
				dp[j] = dp[j - a[i]] - 1;
			}
		}
	}

	if (dp[k] >= 0) cout << "Yes\n";
	else cout << "No\n";
}

///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);、
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	cin >> n;
	cin >> k;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> m[i];
	}

	solve();



	////////////////////////////
	//system("pause");
	return 0;
}

//END
