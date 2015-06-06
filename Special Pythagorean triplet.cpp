#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    int a[n];
    int i, p,l;
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
    for(i=0; i<=n; i++)
    {
        if(a[i]==1 && (n%i==0)) cout<<i<<endl;
    }
    return 0;
}
