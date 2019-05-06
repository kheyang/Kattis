#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false); cin.tie(NULL);
	string sentence;
	getline( cin , sentence );
	int l = sentence.length();
	bool ind = false;
    for(int i = 0 ; i < l-1 ; i ++){
        if(sentence[i]=='s'){
            if(sentence[i+1]=='s'){
                ind = true;
                break;
            }
        }
    }
    if(ind == true){
        cout << "hiss" << endl;
    }else{
        cout << "no hiss" << endl;
    }
    return 0;
}