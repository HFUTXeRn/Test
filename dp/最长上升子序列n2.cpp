//xcoj 1023
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
		if(n==0) continue;
		int st[10080];
		memset(st,0,sizeof(st));
		for(int i=1;i<=n;i++){
			cin>>st[i];
		}
		
		int dp[10070];
		//dp[0]=0;
		for(int i=0;i<n;i++){
			dp[i]=1;
		}
		
		for(int i=1;i<=n;i++){
			for(int j=1;j<i;j++){
				if(st[i]>st[j]) dp[i]=max(dp[i],dp[j]+1);
			}
		}
		int maxi=0;
		for(int i=0;i<=n;i++){
			maxi=max(maxi,dp[i]);
		}
		cout<<maxi<<endl;
		
	}
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

