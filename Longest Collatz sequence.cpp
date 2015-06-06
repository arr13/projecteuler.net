#include <iostream>
using namespace std;
int main()
{
    int max = 9;
    int maxNum;
    int t = 13;
    int i = 13;
    while(t < 1000001)
    {
        int count = 1;
        while(i != 1)
        {
        if(i % 2 == 0)
            i = i / 2;
        else
            i = 3 * i + 1;
        count++;
        }
        if(max < count)
        {
            max=count;
            maxNum = t;
        }
        ++t;
        i=t;
        cout<<count<<" ";
    }
    cout << endl << maxNum;
    return 0;
}
