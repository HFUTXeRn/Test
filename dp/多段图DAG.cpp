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
//#pragma comment(linker, "/STACK:102400000,102400000")
typedef long long LL;
typedef long double LD;
const double PI = acos(-1.0);
///////////////////////////// 
const int INF = 0x3f3f3f3f;

int a[200][200];
int d[200][200];
int nxt[200][200];



///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);、
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	int n, m;
	while (scanf("%d%d",&m,&n)!=EOF&&m) {
		
		for (int i = 0; i<m; i++) {
			for (int j = 0; j<n; j++) {
				scanf("%d", &a[i][j]);
			}
		}
		memset(nxt, 0, sizeof(nxt));

		int ans = INF;
		int first = 0;

		for (int j = n - 1; j >= 0; j--) {
			for (int i = 0; i<m; i++) {
				if (j == n - 1) d[i][j] = a[i][j];
				else {
					int rows[3] = { i,i - 1,i + 1 };
					if (i == 0) rows[1] = m - 1;
					if (i == m - 1) rows[2] = 0;
					sort(rows, rows + 3);
					d[i][j] = INF;
					for (int k = 0; k<3; k++) {
						int v = d[rows[k]][j + 1] + a[i][j];
						if (v<d[i][j]) {
							d[i][j] = v;
							
							nxt[i][j] = rows[k];
						}
					}
				}
				if (j == 0 && d[i][j]<ans) {
					ans = d[i][j];
					//cout << ans<<" ";
					first = i;
				}
			}
		}
		/*for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << nxt[i][j] << " ";
			}
			cout << endl;
		}*/
		printf("%d", first + 1);
		for (int i = nxt[first][0], j = 1; j<n; i = nxt[i][j], j++) {
			printf(" %d", i + 1);
		}
		printf("\n%d\n", ans);
	}



	////////////////////////////                                                     
	//system("pause");
	return 0;
}

//END
