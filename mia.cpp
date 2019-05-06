#include<bits/stdc++.h>
using namespace std;

int rating( int a , int b ){
	if( (( a == 1 ) && ( b == 2)) || ((a == 2) && ( b == 1)) ){
		return 3;
	}else if( a == b ){
		return 2;
	}else{
		return 1;
	}
}

int score( int a , int b ){

	if( a > b){
		return a*10 + b ;
	}else{
		return b*10 + a ;
	}

}

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	int s0, s1, r0, r1;
	cin >> s0 >> s1 >> r0 >> r1;

	while(s0 + s1 + r0 + r1 != 0){

		int player_1 = rating( s0 , s1 );
		int player_2 = rating( r0 , r1 );

		if( player_1 > player_2 ){

			cout << "Player 1 wins." << endl;

		}else if( player_2 > player_1 ){

			cout << "Player 2 wins." << endl;

		}else if( player_1 + player_2 == 6){
			
			cout << "Tie." << endl;

		}else if( player_1 + player_2 == 4 ){

			if( (s0 + s1) > (r0 + r1) ){
				cout << "Player 1 wins." << endl;
			}else if( (s0 + s1) < (r0 + r1) ){
				cout << "Player 2 wins." << endl;
			}else if( (s0 + s1) == (r0 + r1) ){
				cout << "Tie." << endl;
			}

		}else if( player_1 + player_2 == 2){

			int score_1 = score( s0 , s1 );
			int score_2 = score( r0 , r1 );

			if( score_1 > score_2 ){
				cout << "Player 1 wins." << endl;
			}else if( score_2 > score_1 ){
				cout << "Player 2 wins." << endl;
			}else{
				cout << "Tie." << endl;
			}


		}

		cin >> s0 >> s1 >> r0 >> r1;

	}
	return 0;
}