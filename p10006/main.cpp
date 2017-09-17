#include <stdio.h>


bool Prime[65001];
void CreatPrimeTable() {
    int i, j;
    for (int i=0; i<65000; i++)
        Prime[i] = true;
    Prime[0] = false;
    Prime[1] = false;
    for(i = 2; i < 65000; i++) {
        if(Prime[i] == true) {
            for(j = 2; i*j < 65000; j++)
                Prime[i*j] = false;//除去i倍的數
        }
    }
}
long long mod1(long long x, long long y, long long m) {
    long long tmp = x, ans = 1;
    while(y) {
        if(y&1) {
            ans *= tmp;
            ans %= m;
        }
        tmp = tmp*tmp, tmp %= m;
        y >>= 1;
    }
    return ans;
}
long long  mod2(long long a, long long p, long long m)//與fun mod1功能相同
{
    if(p==0)
        return 1;

    if(p%2==0){                  // p is even then split it up and mod
        int c= mod2(a, p / 2, m);
        return ( (c%m) * (c%m) )%m;
    }
    else  // p is odd then make it even
        return ( (a%m)* mod2(a, p - 1, m) ) %m;

}
int Check(int n) {
    int x;
    for(x = 2; x <= n-1; x++) {
        if(mod1(x, n, n) != x){
            return 0;
        }
    }
    return 1;
}
int main() {
    CreatPrimeTable();
    int n;
    while(scanf("%d", &n) == 1 && n) {
        if(Prime[n] == false && Check(n) == 1)
            printf("The number %d is a Carmichael number.\n", n);
        else
            printf("%d is normal.\n", n);
    }
    return 0;
}