#include <stdio.h>

int main() {
    int TestCaseNum;
    scanf("%d", &TestCaseNum);
    while(TestCaseNum--) {
        int n_line;
        double a_0, a_1, c;
        scanf("%d %lf %lf", &n_line, &a_0, &a_1);
        for(int i = 0; i < n_line; i++) {
            scanf("%lf", &c);
            a_1 = a_1 - 2*(n_line-i)*c;
        }
        a_1 = a_1 + n_line*a_0;
        printf("%.2lf\n", a_1/(n_line+1));
        if(TestCaseNum)
            puts("");
    }
    return 0;
}