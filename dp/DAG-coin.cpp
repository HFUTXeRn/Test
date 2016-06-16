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

const int MAXN=10010;
const int INF=1000000;
int n,s,v[MAXN],minn[MAXN],maxn[MAXN];

void print_ans(int *d,int s){
	for(int i=1;i<=n;i++)
		if(s>=v[i]&&d[s]==d[s-v[i]]+1){
			cout<<i;
			print_ans(d,s-v[i]);
			break;
		}
}


///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);、
	//freopen("output.txt", "w", stdout);
	////////////////////////////
	
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>v[i];
	}
	//sort(v+1,v+1+n);
	for(int i=1;i<=s;i++){
		maxn[i]=-INF;
		minn[i]=INF;
	}
	
	maxn[0]=0;
	minn[0]=0;
	for(int i=1;i<=s;i++){
		for(int j=1;j<=n;j++){
			if(i>=v[j]){
				minn[i]=min(minn[i],minn[i-v[j]]+1);
				maxn[i]=max(maxn[i],maxn[i-v[j]]+1);
			}
		}
	}
	for(int i=1;i<=s;i++) cout<<minn[i]<<" ";
	cout<<endl;
	for(int i=1;i<=s;i++) cout<<maxn[i]<<" ";
	cout<<endl;
	cout<<minn[s]<<" "<<maxn[s]<<endl;
	
	print_ans(minn,s);
	cout<<endl;
	print_ans(maxn,s);
	cout<<endl;
	////////////////////////////                                                     
	//system("pause");
	return 0;
}

//END
