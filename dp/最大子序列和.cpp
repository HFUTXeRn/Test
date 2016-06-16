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
	cin>>n;
	int st[100];
	int temp=0;
	int ans=-(1<<30);
	for(int i=1;i<=n;i++){
		cin>>st[i];
		
		temp+=st[i];
		if(temp<st[i]) temp=st[i];
		ans=max(ans,temp);
	}
	cout<<ans<<endl;
	////////////////////////////
	//system("pause");
	return 0;

}
//END

