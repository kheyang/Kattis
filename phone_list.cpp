#include<bits/stdc++.h>
using namespace std;

// int revert( int a ){

// 	int ans = 1;
// 	int n = 1;
	
// 	while( a > 0 ){
	
// 		ans += (a%10) * pow( 10, n++ );
// 		a /= 10;
	
// 	}
	
// 	return ans;

// }

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;

	while( N-- ){

		int n, max_n; cin >> n;
		max_n = n;
		string num[n];
		int k=0;

		while( n-- ){

			getline( cin , num[k++] );

		}

		n = max_n;
		bool consistent = true;

		while( n-- ){

			for( int j = max_n - n - 1; j < max_n; j++ ){

				string a = num[j];
				for( int l = max_n - n; l < max_n; l++ ){

					string b = num[l];
					auto pos = a.find(b);

					if( pos != string::npos ){
						consistent = false;
						break;
					}

				}

				if ( consistent == false ) break;

			}

			if ( consistent == false ) break;

		}

		if(consistent == true){
			cout << "YES" << endl;
		}else{
			cout << "NO" << endl;
		}



	}
}