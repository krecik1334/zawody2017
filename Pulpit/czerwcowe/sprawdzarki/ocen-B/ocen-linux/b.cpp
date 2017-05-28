#include <bits/stdc++.h>
#define LLU unsigned long long
using namespace std;
int zwe;
LLU a,b,c,d,e,l,p,s;
bool test(LLU zm) {
    LLU wyn=0;
    wyn+=a*(zm*zm*zm);
    wyn+=b*(zm*zm);
    wyn+=c*zm;
    wyn+=d;
    if(wyn<=e) return 1;
    return 0;
}
int main(void) {
    cin>>zwe;
    while(zwe) {
        zwe--;
        cin>>a>>b>>c>>d>>e;
        l=0;
        p=1e6;
        while(l<p) {
            s=(l+p+1)/2;
            if(test(s)) l=s;
            else p=s-1;
        }
        if(test(l))cout<<l<<endl;
        else cout<<"chyba nie"<<endl;
    }
}
