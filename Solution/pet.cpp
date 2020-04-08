#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n=5;
	int currrent_max = 0, chef = 0;
	while (n--) {
		int k=4;
		int local = 0;
		while (k--) {
			int dum; cin >> dum;
			local += dum;
		}
		if (local > currrent_max) {
			currrent_max = local;
			chef = 5 - n;
		}
	}
	cout << chef << " " << currrent_max << endl;
}