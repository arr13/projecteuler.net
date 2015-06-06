#include <iostream>
using namespace std;
int main()
{
    int sum=0, sqsum=0;
    int i, p;
    for(i=1; i<101; i++)
        {
            sum += i;
            sqsum=sqsum+i*i;
        }
    cout<<sum*sum-sqsum;
    return 0;
}
