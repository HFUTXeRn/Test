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
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		//int st[1010];
		set<int>S;
		for (int i = 1; i <= N; i++) {
			int in;
			cin >> in;
			S.insert(in);
		}
		int K;
		cin >> K;
		set<int>::reverse_iterator i = S.rbegin();
		// for(set<int>::iterator j=S.begin();j!=S.end();j++){
		// 	cout<<*j<<" ";
		// }
		// cout<<endl;
	
		for (int k = 1; k <= K; k++) {

			if (k == K) cout << *i << "\n";
			i++;
		}



	}




	////////////////////////////
	//system("pause");
	return 0;
}
//END