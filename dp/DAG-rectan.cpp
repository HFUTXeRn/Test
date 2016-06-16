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
/////////////////////////////

struct edge{
	int a;
	int b;	
}E[1010];


const int MAX_N=1010;
int d[MAX_N];
int G[MAX_N][MAX_N];
int n;

void make_gragh(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(E[i].a<E[j].a&&E[i].b<E[j].b) G[i][j]=1;
		}
	}
}

int dp(int i){
	int &ans=d[i];
	if(ans>0) return ans;
	ans=1;
	for(int j=1;j<=n;j++)
		if(G[i][j]) ans=max(ans,dp(j)+1);
	return ans;
	
}

void print_ans(int i){
	cout<<i;
	for(int j=1;j<=n;j++) if(G[i][j]&&d[i]==d[j]+1){
		print_ans(j);
		break;
	}
	
}
///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);、
	//freopen("output.txt", "w", stdout);
	////////////////////////////
	

	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		E[i].a=max(x,y);
		E[i].b=min(x,y);
	}
	
	memset(d,0,sizeof(d));
	memset(G,0,sizeof(G));
	make_gragh();
	
	
	
	int ans=0;
	int mi;
	for(int i=1;i<=n;i++){
		if(ans<dp(i)){
			mi=i;
			ans=dp(i);
		}
	}
	
	cout<<ans<<endl;
	print_ans(mi);
	
	
	////////////////////////////                                                     
	//system("pause");
	return 0;
}

//END
