#include<bits/stdc++.h>
using namespace std;


int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	unsigned long int n, k; cin >> n >> k;
	if (n <= 2*	k) {
		cout << n-1 << endl;
	} else {
		unsigned long int step = 0;
		step = k + 1 + (n-1)%k;
		cout << step << endl;
	}
}