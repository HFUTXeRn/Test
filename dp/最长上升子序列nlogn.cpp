#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////

const int MAXN = 500010;
int a[MAXN], b[MAXN];
int Search(int num, int low, int high) { 
	int mid;	
	while (low <= high) { 
		mid = (low + high) / 2;         
		if (num >= b[mid])  low = mid + 1;         
		else   high = mid - 1; 
	}     
	return low; 
}
int DP(int n) { 
	int i, len, pos;     
	b[1] = a[1];     
	len = 1;     
	for (i = 2; i <= n; i++) { 
		if (a[i] >= b[len]) { 
			len = len + 1;             
			b[len] = a[i]; 
		} 
		else { 
			pos = Search(a[i], 1, len);             
			b[pos] = a[i]; 
		} 
	}     
	return len; 
}

///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	int n;
	while (cin >> n) {
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		cout << DP(n) << endl;
	}




	////////////////////////////
	//system("pause");
	return 0;
}
//END