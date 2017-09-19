#include <stdio.h>

int main() {
    int TestCaseCount;
    scanf("%d", &TestCaseCount);
    while(TestCaseCount--) {
        int N_Count;
        double A0, An1, Ci;
        scanf("%d %lf %lf", &N_Count, &A0, &An1);

        //(n + 1)a1 = na0 + an+1 – 2(nc1 + (n-1)c2 + (n-2)c3 + …… + cn)。
        for(int i = 0; i < N_Count; i++) {
            scanf("%lf", &Ci);
            An1 = An1 - 2*(N_Count-i)*Ci;
        }
        An1 = An1 + N_Count*A0;
        printf("%.2lf\n", An1/(N_Count+1));
        if(TestCaseCount)
            puts("");
    }
    return 0;
}