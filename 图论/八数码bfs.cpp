#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
const double pi = acos(-1.0);
///////////////////////////////



void swap(char &x, char &y) {
	char temp = x;
	x = y;
	y = temp;
}



///////////////////////////////
int main(int argc, char**argv) {
	ios_base::sync_with_stdio(0); cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	////////////////////////////

	string in;

	while (cin >> in) {
		set<string>S;
		queue<pair<string, int> >Q;

		int flag = 0;

		Q.push(make_pair(in, 0));
		S.insert(in);
		string ans = "000000000";
		int time = 0;
		while (!Q.empty()) {
			string here = Q.front().first;
			int cont = Q.front().second;
			cont++;
			Q.pop();

			if (here == ans) {
				flag = 1;
				cout << cont - 1 << "\n";
				break;
			}

			int x;
			for (int i = 0; i<here.size(); i++) {
				if (here[i] == '0') {
					x = i;
				}
			}

			if (x - 3 >= 0) {
				string op = here;
				swap(op[x], op[x - 3]);
				set<string>::iterator i = S.find(op);
				if (i==S.end()) Q.push(make_pair(op, cont));

			}
			if (x + 3 <= 8) {
				string op = here;
				swap(op[x], op[x + 3]);
				set<string>::iterator i = S.find(op);
				if (i == S.end()) Q.push(make_pair(op, cont));
			}
			if (x + 1 <= 8) {
				string op = here;
				swap(op[x], op[x + 1]);
				set<string>::iterator i = S.find(op);
				if (i == S.end()) Q.push(make_pair(op, cont));
			}
			if (x - 1 >= 0) {
				string op = here;
				swap(op[x], op[x - 1]);
				set<string>::iterator i = S.find(op);
				if (i == S.end()) Q.push(make_pair(op, cont));
			}



		}

		if (flag == 0) cout << "-1" << endl;

	}








	////////////////////////////
	//system("pause");
	return 0;

}
//END

