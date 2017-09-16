#include <iostream>
using namespace std;

int main() {
    int count=0,i,j;
    int input_count;
    int input_array[50]={0};
    while (count<50) {
        cin >> input_count;
        input_array[count] = input_count;
        if(input_count==0)
        {
            break;
        }
        count++;
    }
    for(i = 0 ;i < count ; i++)
    {
        if (input_array[i] <= 50) {
            int fib[50] = {0};
            fib[0] = 0;
            fib[1] = 1;
            fib[2] = 2;
            for (j = 3; j <= input_array[i]; j++) {
                fib[j] = fib[j - 1] + fib[j - 2];
            }
            cout << fib[input_array[i]] << endl;
        } else {
            cout << "輸入超過50" << endl;
        }

    }

    return 0;
}

