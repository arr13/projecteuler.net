#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,p,n,maxn=0,i1,p1;
    for (i=999; i>=100; i--)
    {
        for(p=i; p>=100; p--)
        {
            n=i*p;
            if (n%10==n/100000 && (n/10)%10==(n/10000)%10 && (n/1000)%10==(n/100)%10)
            { cout<<n<<"="<<p<<"*"<<i<<endl;
            }
        }
    }
    return 0;
}
