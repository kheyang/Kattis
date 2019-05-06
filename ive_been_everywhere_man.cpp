#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	while (N--) {
		unordered_set<string> country;
		int n; cin >> n;
		while (n--) {
			string cname; cin >> cname;
			country.insert(cname);
		}
		cout << country.size() << endl;
	}
}