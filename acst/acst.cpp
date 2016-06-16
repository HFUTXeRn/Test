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
		int n,m,k;
		cin>>n>>m>>k;
		
		int st[110][110];
		int sum1[110][110];
		memset(sum1,0,sizeof(sum1));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>st[i][j];
			}
		}
		
		for(int j=1;j<=m;j++){
			for(int i=1;i<=n;i++){
				sum1[i][j]=st[i][j]+sum1[i-1][j];
			}
		}
		
		int ans=0;
		for(int xa=1;xa<=n;xa++){
			for(int xb=xa;xb<=n;xb++){
				for(int ya=1;ya<=m;ya++){
					for(int yb=ya;yb<=m;yb++){
						int sum=0;
						for(int j=ya;j<=yb;j++){
							sum+=sum1[xb][j]-sum1[xa-1][j];
						}
						if(sum<=k)
							ans=max(ans,(xb-xa+1)*(yb-ya+1));
						
					}
				}
			}
		}
		cout<<ans<<"\n";
		
	}
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

