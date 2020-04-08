#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string month;
	int day;
	cin >> month >> day;
	if ( (month == "OCT" && day == 31) || (month == "DEC" && day == 25) ) {
		cout << "yup" << endl;
	} else {
		cout << "nope" << endl;
	}
}