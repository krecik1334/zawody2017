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

int a, b, c, d;
LLI W;

bool f(int x){
    return LLI((LLI)x*x*x*a + LLI(x)*x*b + x*c + d) <= W;
}

int main()
{
    int z; scanf("%d", &z);
    while(z--){
        scanf("%d%d%d%d%lld", &a, &b, &c, &d, &W);
        int beg = 0, end = 1e6;
        while(beg < end){
            int mid = (beg + end + 1) / 2;
            if(f(mid))
                beg = mid;
            else
                end = mid - 1;
        }
        if(f(beg))
            printf("%d\n", beg);
        else
            puts("chyba nie");
    }
}
