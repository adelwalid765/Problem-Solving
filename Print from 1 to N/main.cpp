#include <iostream>
using namespace std;

void printFrom1toN(int n)
{
    if (n<=0)
    {
        return;
    }

    printFrom1toN(n-1);

    cout<<n<<endl;
}

int main()
{
    int n;
    if(cin>>n)
    {
     printFrom1toN(n);
    }

    return 0;
}
