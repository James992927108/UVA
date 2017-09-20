
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long input=0,count=0 ;
    long long input_array[50]={0};
    while(input < 2147483647)
    {
        cin >> input;
        input_array[count] = input;
        if(input==0)
            break;
        count++;
    }
    for(long long i = 0;i < count ;i++)
    {
        if (input_array[i] <= 2147483647) {
            long long sqr = sqrt(input_array[i]);
            if(sqr * sqr == input_array[i])
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        } else {
            return 0;
        }
    }
    return 0;
}