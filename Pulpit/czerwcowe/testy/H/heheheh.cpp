#include <bits/stdc++.h>
#include <sys/time.h>
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

int R(int a, int b) {return a + rand() % (b - a + 1);}

int main()
{
    for(int i = 1; i <= 15; ++i){
        fstream f;
        string nr = to_string(i);
        string s = "h" + nr + ".out";
        f.open(s, ios::out);
        f << "rafal bez koszulki";
    }
}
