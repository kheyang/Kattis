#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, ang; cin >> n >> ang;
	double rad = (ang*2*3.1415926) / 360;
	double l = (n*1.0) / (sin(rad));
	cout << ceil(l) << endl;
}