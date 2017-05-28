#include <bits/stdc++.h>
#include <sys/time.h>
using namespace std;

int R(int a, int b) {return a + rand() % (b - a + 1);}

int main()
{
    timeval czas; gettimeofday(&czas, NULL);
    srand(czas.tv_sec*1000 + czas.tv_usec%1000);
    int Z = 100000;
    printf("%d\n", Z);
    while(Z--){
        printf("%d %d %d %d %lld\n", R(1, 5), R(1, 5), R(1, 5), R(1, 5), R(1, 1e5)/*(long long)R(1, 1000000000)*R(1, 1000000000)*/);
    }
}


