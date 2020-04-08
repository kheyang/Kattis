#include<bits/stdc++.h>
using namespace std;
 
int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	while (N--) {
		int n, m; cin >> n >> m;
		while (m--) {
			int a,b; cin >> a >> b;
		}
		if ( m == n*n ) {
			cout << 1 << endl;
		} else {
			cout << n-1 << endl;
		}
	}
	return 0;
}