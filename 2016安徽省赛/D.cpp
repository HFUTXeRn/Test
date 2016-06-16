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
	cin>>T;
	while(T--){
		int m,n,q;
		cin>>n;
		cin>>m;
		cin>>q;
		int st[40010];
		for(int i=1;i<=m*n;i++){
			cin>>st[i];
		}
		sort(st+1,st+1+m*n);
		while(q--){
			int L;
			cin>>L;
			int h=upper_bound(st+1,st+1+m*n,L)-(st+1);
			cout<<m*n-h<<"\n";
		}
	}
	
	
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

