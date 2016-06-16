#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////



///////////////////////////////
int main(int argc, char**argv) {
	//ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////
	int T;
	cin>>T;
	while(T--){
		double a,b,r;
		cin>>a>>b>>r;
		double xa,ya;
		cin>>xa>>ya;
		double w,t;
		cin>>w>>t;
		
		double xb=a+r*cos(w*t);
		double yb=b+r*sin(w*t);
		//cout<<abs((b-ya)*(xa-xb)-(ya-yb)*(a-xa))<<endl;
		//cout<<(sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)))<<endl;
		double d=abs((b-ya)*(xa-xb)-(ya-yb)*(a-xa))/(sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb)));
		double ans=2*(sqrt(r*r-d*d));
		//cout<<xb<<" "<<yb<<endl;
		printf("%.2f\n",ans);
		
		
	}
	
	////////////////////////////
	//system("pause");
	return 0;

}
//END

