#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n=800000;
    long long int a[n];
    int i, p,l,cnt=0;
    a[0]=a[1]=0;
        for(i=2; i<=n; i++)
        {
            a[i]=1;
        }
        for(i=2; i<=n; i++)
        {
            for(l=2, p=i*2; p<=n; l++, p=i*l)
            {
                a[p]=0;
            }
        }
        for(i=0; i<=(n-1); i++)
        {
            if(a[i]==1 && cnt<=10001) {
                    cnt++;
                    p=i;
        }
        }

    cout<<p;
    return 0;
}
