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
	int n;
	while(cin>>n){
		int st[200];
		for(int i=1;i<=n;i++){
			cin>>st[i];
		}
		
		int dp1[200];
		int dp2[200];
		memset(dp1,0,sizeof(dp1));
		memset(dp2,0,sizeof(dp2));
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(st[i]>st[j]&&dp1[i]<dp1[j]+1) dp1[i]=dp1[j]+1; 
			}
		}
		for(int i=n;i>=1;i--){
			for(int j=n;j>i;j--){
				if(st[i]>st[j]&&dp2[i]<dp2[j]+1) dp2[i]=dp2[j]+1;
			}
		}
		int maxl=0;
		for(int i=1;i<=n;i++){
			maxl=max(maxl,dp1[i]+dp2[i]);
		}
		cout<<n-maxl-1<<endl;
	}

	////////////////////////////
	//system("pause");
	return 0;

}
//END

