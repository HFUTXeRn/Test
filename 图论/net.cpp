#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double PI = acos(-1.0);
///////////////////////////////

const int MAX_V=10000;

struct edge{
	int to;
	int cap;
	int rev;	
};

vector<edge> G[MAX_V];
bool used[MAX_V];

void add_edge(int from,int to,int cap){
	G[from].push_back((edge){to,cap,G[to].size()});
	G[to].push_back((edge){from,0,G[from].size()-1});
}

int dfs(int v,int t,int f){
	if(v==t) return f;
	used[v]=true;
	for(int i=0;i<G[v].size();i++){
		edge &e=G[v][i];
		if(!used[e.to]&&e.cap>0){
			int d=dfs(e.to,t,min(f,e.cap));
			if(d>0){
				e.cap-=d;
				G[e.to][e.rev].cap+=d;
				return d;
			}
		}
	}
	return 0;
}


int max_flow(int s,int t){
	int flow=0;
	for(;;){
		memset(used,0,sizeof(used));
		int f=dfs(s,t,999999);
		if(f==0) return flow;
		flow+=f;
	}
}

///////////////////////////////
int main(int argc, char**argv) {
    ios_base::sync_with_stdio(0);cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////
    int N;
	int M;
	cin>>N>>M;
	int num[10000];
	for(int i=1;i<=N;i++){
		cin>>num[i];
	}
	for(int i=1;i<=M;i++){
		int x,y;
		cin>>x>>y;
		add_edge(x,y,)
	}
	
	
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END
