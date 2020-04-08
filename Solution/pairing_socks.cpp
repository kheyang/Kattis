#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	stack<int> oriPile, auxPile;
	int N=2*n;
	while (N--) {
		int a; cin >> a;
		oriPile.push(a);
	}
	int c=0;
	while (!oriPile.empty()) {
		if (auxPile.empty()) {
			auxPile.push(oriPile.top());
			oriPile.pop();
			c++;
		} else if (oriPile.top()!=auxPile.top()) {
			auxPile.push(oriPile.top());
			oriPile.pop();
			c++;
		} else {
			oriPile.pop();
			auxPile.pop();
			c++;
		}
	}
	if (oriPile.empty() && auxPile.empty()) {
		cout << c << endl;
	} else {
		cout << "impossible" << endl;
	}
}