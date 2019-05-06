#include<bits/stdc++.h>
using namespace std;
 
int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N; cin >> N;
	string dummy;
	getline ( cin, dummy );

	while (N--) {

		string sound;
		getline ( cin, sound );
		set<string> typeOfSound;

		while (1) {
			string animal_sound;
			getline ( cin, animal_sound );
			if ( animal_sound=="what does the fox say?" ) break;
			stringstream temp(animal_sound);
			string dum_1, dum_2, intermediate;
			getline( temp, dum_1, ' ' );
			getline( temp, dum_2, ' ' );
			getline( temp, intermediate);
			typeOfSound.insert( intermediate );
		}

		stringstream temp_sound(sound);
		string recordedSound;

		while ( getline(temp_sound, recordedSound, ' ') ) {
			if ( typeOfSound.find(recordedSound)==typeOfSound.end()	 ) {
				cout << recordedSound << ' ';
			}
		}

		cout << endl;

	}
}