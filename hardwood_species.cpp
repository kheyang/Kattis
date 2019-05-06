#include<bits/stdc++.h>
using namespace std;
 
int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	map<string, int> freq;
	set<string> species;
	string spec;
	int n=0;

	while(	getline( cin, spec ) ){

		species.insert( spec );
		freq[spec]++;
		n++;

	}

	for (auto it=species.begin(); it!=species.end(); it++){
		int k = freq[*it];
		double percentage = (double)k*100 / n;

		cout << *it << " " << fixed << setprecision(6) << percentage << endl;
	}
}

