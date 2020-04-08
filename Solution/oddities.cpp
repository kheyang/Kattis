#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL);

	int n; cin >> n;

	for( int i = 0 ; i < n ; i ++ ){

		int k; cin >> k; 
		cout << k ;
		if( k < 0 ){
			k = k * ( -1 );
		}
		if( k % 2 == 0 ){
			cout << " is even" << endl;
		}else{
			cout << " is odd" << endl;
		}

	}

	return 0;
}