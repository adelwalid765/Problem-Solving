#include <iostream>

using namespace std;

long long a[1005];


void printEvenReverse(int n,int i) {
    if (i>=n)
    {
        return;
    }


    printEvenReverse(n,i+2);
    cout<<a[i]<<" ";
}

int main()
  {
    int n;
    cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        printEvenReverse(n,0);
        cout<<endl;

    return 0;
}
