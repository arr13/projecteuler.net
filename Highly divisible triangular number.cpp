#include <iostream>
using namespace std;

int main()
{
    int count;
    int i=1;
    int c=2;
    int p;
    do{
      cout<<endl;
      count=0;
      i=i+c;
      c++;
      for(p=1; p<=i; p++)
      {
          if(i%p==0) count++;
      }
      }while(count<500);
    cout<<i;
    return 0;
}
