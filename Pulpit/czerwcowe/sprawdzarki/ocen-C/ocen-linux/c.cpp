#include <bits/stdc++.h>
using namespace std;
 
int t[] = {2,1,3,7};
 
int main() {
	string s;
	cin >> s;
	int wsk = 0;
	for(char c : s){
		if(wsk == 4) wsk = 0;
		cout << char('a' + (c - 'a' + t[wsk++]) % 26);
	}
}
