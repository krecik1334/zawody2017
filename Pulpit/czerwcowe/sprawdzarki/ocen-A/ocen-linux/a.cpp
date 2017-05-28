#include <bits/stdc++.h>
using namespace std;

string b = "blendzior#";

int main(){
    int n; string s;
    cin >> n >> s;
    int wsk = 0;
    for(int i = 0; i < n; ++i)
    	if(s[i] == b[wsk])
    		++wsk;
    wsk == 9 ? printf("do szkoly!") : printf("chyba nie");
}
