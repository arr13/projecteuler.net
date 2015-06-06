#include <iostream>
using namespace std;
int main()
{
    int num,i=20,p,l;
    do{
        l=1;
        for(p=2; p<=10; p++)
        {
            if(i%p==0) l++;
        }
        num=i;
        i++;
    } while(l!=10);
    cout<<num;
    return 0;
}

