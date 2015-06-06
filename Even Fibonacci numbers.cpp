#include <iostream>
using namespace std;
int main()
{
    int a=1,b=2, num=2, sum=2;
        while(b<4000000){
        num=a+b;
        a=b;
        b=num;
        if (num<=4000000 && num%2==0) sum=sum+num;
    }
    cout<<sum;
    return 0;
}
