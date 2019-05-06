#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int a = 0, b = 1001, n = 10;
	cout << 500 << endl;
	while (n--) {
		string response; cin >> response;
		if (response == "lower") {
			b = ( a + b ) / 2;
		} else if (response == "higher") {
			a = ( a + b ) / 2;
		} else {
			exit(0);
		}
		// if (a==999) {
		// 	b = 1001;
		// }
		cout << (a+b)/2 << endl;
	}
}

