#include <bits/stdc++.h>
using namespace std;

#ifndef _WIN32
    #define getchar getchar_unlocked
#endif

#define MP make_pair
#define PB push_back
#define ST first
#define ND second

typedef long long int LLI;
typedef unsigned long long int LLU;
typedef long double LD;
typedef pair<int, int> pii;
typedef pair<long long int, long long int> pll;
typedef vector<int> vi;

template<class TH> void _dbg(const char *sdbg, TH h){cerr<<sdbg<<"="<<h<<"\n";}
template<class TH, class... TA> void _dbg(const char *sdbg, TH h, TA... a) {
  while(*sdbg!=',')cerr<<*sdbg++;cerr<<"="<<h<<","; _dbg(sdbg+1, a...);
}
#define debug(...) _dbg(#__VA_ARGS__, __VA_ARGS__)
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MOD = 37;

int main()
{
    LLI k; scanf("%lld", &k);
    LLI pom = 153, wyn = 1;
    for(int i = 0; (1ll << i) <= k; ++i){
        if((k & (1ll<<i)) > 0)
            wyn = (wyn * pom) % MOD;
        pom = (pom * pom) % MOD;
    }
    printf("%lld", wyn);
}
