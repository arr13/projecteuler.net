#include <iostream>
using namespace std;
int main()
{
    int sum,i;
    sum=0;
    for(i=999; i<1000 && i>0; i--)
        {if(i%3==0 || i%5==0) sum=sum+i; }
    cout<<"sum="<<sum;
    return 0;
}
