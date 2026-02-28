#include <iostream>
using namespace std;

void printFromNto1(int n)
{
    if (n<=0)
    {
        return;
    }

    cout<< n;
    if(n>1)
    {
       cout<<" ";
    }
    printFromNto1(n-1);

}

int main()
{
    int n;
    if(cin>>n)
    {
     printFromNto1(n);
    }

    return 0;
}
