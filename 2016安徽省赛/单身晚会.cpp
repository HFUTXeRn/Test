#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////

///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	int T;
	cin >> T;
	while (T--) {
		int N, P, C;
		cin >> N >> P >> C;

		int st[501][501];
		int fr[501];
		int dis[501];

		for (int i = 1; i <= 500; i++) {
			dis[i] = 0;
		}

		for (int i = 1; i <= 500; i++) {
			for (int j = 1; j <= 500; j++) {
				st[i][j] = 100000;
				if (i == j) st[i][j] = 0;
			}
		}

		for (int i = 1; i <= N; i++) {
			cin >> fr[i];
		}

		for (int i = 1; i <= C; i++) {
			int a, b, k;
			cin >> a >> b >> k;
			st[a][b] = k;
			st[b][a] = k;
		}

		for (int k = 1; k <= P; k++) {
			for (int i = 1; i <= P; i++) {
				for (int j = 1; j <= P; j++) {
					if (st[i][j]>st[i][k] + st[k][j]) {
						st[i][j] = st[i][k] + st[k][j];
					}
				}
			}
		}
		/*for (int i = 1; i <= P; i++) {
			for (int j = 1; j <= P; j++) {
				cout << st[i][j] << " ";
			}
			cout << endl;
		}*/


		for (int i = 1; i <= P; i++) {
			for (int j = 1; j <=N ; j++) {
				dis[i] += st[i][fr[j]];
			}
		}
		int ans = 1000000;

		for (int i = 1; i <= P; i++) {
			ans = min(ans, dis[i]);
		}
		cout << ans << "\n";

	}





	////////////////////////////
	//system("pause");
	return 0;

}
//END

