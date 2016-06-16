#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////



vector<pair<int, int> >road[7000];

int var[7000];



///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////




	int T, C;
	cin >> T >> C;
	int Ts, Te;
	cin >> Ts >> Te;

	for (int i = 1; i <= C; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		road[from].push_back(make_pair(cost, to));
		road[to].push_back(make_pair(cost, from));
	}

	for (int i = 0; i < 7000; i++) {
		var[i] = 999999;
	}

	priority_queue<pair<int, int> >Q;

	Q.push(make_pair(0, Ts));
	var[Ts] = 0;

	while (!Q.empty()) {
		int N = Q.top().second;
		Q.pop();
		for (int i = 0; i<road[N].size(); i++) {
			int V = road[N][i].second;
			if (var[N] + road[N][i].first<var[V]) {
				var[V] = var[N] + road[N][i].first;
				Q.push(make_pair(-var[V], V));
			}
		}


	}
	cout<<var[Te]<<endl;








	////////////////////////////
	//system("pause");
	return 0;

}
//END

