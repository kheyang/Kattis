	#include<bits/stdc++.h>
	using namespace std;
	typedef vector<int> vi;
	typedef pair<char, int> ci;
	typedef tuple<int, int, int> iii;

	int main(){
		ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
		int N; cin >> N;
		char arr[N][N];
		int x, y;
		for (int i=0; i<N; i++) {
			for (int j=0; j<N; j++) {
				char dum; cin >> dum;
				arr[i][j] = dum;
				// arr[i][j].second = second;
				if (dum == 'K') {
					x = i;
					y = j;
				}
			}
		}
		if (x==0 && y==0) {
			cout << 0 << endl;
			exit(0);
		}
		queue<iii> q;
		q.push({x,y,0});
		bool moved = true, reached = false;
		int dir[8][2] = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
		int round = 0;
		while (moved) {
			moved = false;
			while (get<2>(q.front())==round) {
				int m = get<0>(q.front()), n = get<1>(q.front());
				q.pop();
				for (int i=0; i<8; i++) {
					int a = dir[i][0], b = dir[i][1];
					if (arr[a+m][b+n]=='.' && a+m < N && b+n < N) {
						if (a+m==0 && b+n==0) {
							reached = true;
							break;
						}
						arr[a+m][b+n] = 'K';
						q.push({a+m, b+n, round+1});
						moved = true;
					}
				}
				if (reached) break;
			}
			round ++;
			if (reached) break;
		}
		if (reached) {
			cout << round << endl;
		} else {
			cout << -1 << endl;
		}
	}

