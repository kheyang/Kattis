	#include<bits/stdc++.h>
	using namespace std;
	 
	int main(){

		ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int N; cin >> N;
		int k=1;
		while (N--) {

			int n; cin >> n;
			string dum;
			getline ( cin, dum );
			set<string> serial;

			while (n--) {
				string num; cin >> num;
				if ( serial.find(num) == serial.end() ) {
					serial.insert(num);
				}else{
					serial.erase(num);
				}
			}
			auto it = serial.begin();
			cout << "Case #" << k++ << ": " << *it << endl;

		}
	}
