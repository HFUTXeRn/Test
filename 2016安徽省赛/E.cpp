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
		int n;
		cin>>n;
		
		int a[1010],b[1010],c[1010];
		for(int i=1;i<=n;i++){
			cin>>a[i]>>b[i]>>c[i];
			a[i]=a[i]-c[i];
		}
		int t;
		cin>>t;
		sort(a+1,a+1+n);
		sort(b+1,b+1+n);
		sort(c+1,c+1+n);
		
		int tc=t;
		for(int i=1;i<=n;i++){
			tc-=c[i];
		}
		
		
		
		int num_a=0;
		int ta=tc;
		for(int i=1;i<=n;i++){
			ta-=a[i];
			if(ta<0) break;
			num_a++;
		}
		int cnt=0;
		
		if(tc<0){
			cout<<"Oh,my god!\n";
		}
		else{
			cout<<num_a<<"\n";
		}
		
	}
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

