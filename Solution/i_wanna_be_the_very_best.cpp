#include<bits/stdc++.h>
using namespace std;
typedef pair<unsigned int, int> ii;

int main(){

	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K; cin >> N >> K;
	int s = 0;
	priority_queue<ii> attack, defense, health;
	set<int> pokenom;
	while (N--) {
		unsigned int a, d, h; cin >> a >> d >> h;
		attack.push( {a, s} );
		defense.push( {d, s} );
		health.push( {h, s} );
		s++;
	}
	while (K--) {
		pokenom.insert( attack.top().second );
		pokenom.insert( defense.top().second );
		pokenom.insert( health.top().second );
		attack.pop();
		defense.pop();
		health.pop();
	}
	cout << pokenom.size() << endl;
	return 0;
}