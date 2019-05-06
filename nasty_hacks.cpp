#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n; cin >> n;
	while(n--){
		int a, b, c; cin >> a >> b >> c;
		if( (b-c) > a ){
			cout << "advertise" << endl;
		}else if( (b-c) == a) {
			cout << "does not matter" << endl;
		}else{
			cout << "do not advertise" <<endl;
		}
	}
}