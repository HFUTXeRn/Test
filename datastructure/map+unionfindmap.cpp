#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////

int par[10008];
map<string, int>M;


int find(int u) {
	if (u == par[u]) {
		return u;
	}
	else {
		return par[u] = find(par[u]);
	}
}

void aunion (int a, int b) {
	int x = find(a);
	int y = find(b);

	if (x<y) {
		par[y] = x;
	}
	else{
		par[x] = y;
	}
}



///////////////////////////////
int main(int argc, char**argv) {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		string in;
		cin >> in;
		M[in] = i;
	}

	cin >> m;

	for (int i = 1; i <= n; i++) {
		par[i] = i;
	}


	while (m--) {
		char sw[3];
		scanf("%s",sw);
		
		if (sw[0] == 't') {
			int ans = 0;

			for (int i = 1; i <= n; i++) {
				if (find(i) == i) {
					ans++;
				}
			}

			printf("%d\n",ans);
		}
		if (sw[0] == 'a') {
			string fr;
			string se;
			cin >> fr >> se;

			int u = M[fr];
			int v = M[se];

			aunion(u, v);




		}
		if (sw[0] == 'q') {

			string in;
			cin >> in;

			int u = M[in];

			int ans = find(u);

			printf("%d\n",ans);




		}





	}



	





	////////////////////////////
	//system("pause");
	return 0;

}
//END

