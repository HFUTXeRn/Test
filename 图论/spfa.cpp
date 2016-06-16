#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////



vector<pair<int, int> >road[7000];

int var[7000];

int mar[7000];


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
		mar[i]=0;
	}
	
	
	queue<int>Q;
	Q.push(Ts);
	mar[Ts]=1;
	var[Ts]=0;
	
	while(!Q.empty()){
		
		int N=Q.front();
		Q.pop();
		mar[N]=0;
		
		for(int i=0;i<road[N].size();i++){
			int V=road[N][i].second;
			int S=road[N][i].first;
			
			if(mar[N]==0&&var[V]>var[N]+S){
				var[V]=var[N]+S;
				Q.push(V);
				mar[V]=1;
			}
			
			
		}
		
		
	}
	
	cout<<var[Te]<<endl;





	////////////////////////////
	//system("pause");
	return 0;

}
//END

