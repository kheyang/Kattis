#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	unsigned long int N; cin >> N;
	while (N--) {
		unsigned long int P, R, F; cin >> P >> R >> F;
		int year = 0;
		unsigned long int this_year_p = P;
		while ( this_year_p <= F ) {
			this_year_p *= R;
			year++;
		}
		cout << year << endl;
	}
}