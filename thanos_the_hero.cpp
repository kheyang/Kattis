#include<bits/stdc++.h>
using namespace std;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	unsigned long int N; cin >> N;
	stack<int> population;
	while (N--) {
		int temp; cin >> temp;
		population.push(temp);
	}
	unsigned long int k = 0;
	bool impossible = false;
	while (!population.empty()) {
		int a;
		a = population.top();
		population.pop();
		if (population.empty()) break;
		if ( a > population.top() ) {
			continue;
		} else {
			if (a-1<0) {
				cout << 1 << endl;
				impossible = true;
				break;
			}
			k += population.top() - a + 1;
			population.pop();
			population.push(a-1);
		}
	}
	if (!impossible) {
		cout << k << endl;
	}
}