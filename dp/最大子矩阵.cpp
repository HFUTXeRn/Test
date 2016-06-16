#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////

LL st[504][504];
LL temp[504];
LL sum[504][504];
int m,n;
long long maxarr(){
	long long res=0;
	long long te=0;
	for(int i=1;i<=m;i++){
		te+=temp[i];
		if(te<0) te=0;
		if(te>res) res=te;
	}
	
	return res;
}




///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////
	

	cin>>m>>n;
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>st[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			sum[i][j]=st[i][j]+sum[i-1][j];
			//cout<<sum[i][j]<<" ";
		}
	}
	
	
	long long ans=0;
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			memset(temp,0,sizeof(temp));
			for(int k=1;k<=m;k++){
				temp[k]=sum[j][k]-sum[i-1][k];
				//cout<<temp[k];
			}
			LL tp=maxarr();
			//cout<<tp<<endl;
			if(tp>ans) ans=tp;
		}
	}
	cout<<ans<<endl;
	
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

