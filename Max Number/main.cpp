#include <iostream>
using namespace std;

long long arr[1000];

long long findMax(int n,int i)
{
    if (i==n-1)
    {
        return arr[i];
    }

    long long maxx=findMax(n,i+1);

    if (arr[i]>maxx)
    {
        return arr[i];
    }
    else
    {
        return maxx;
    }
}

int main()
 {
    int n;
    cin>>n;

    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

       cout<<findMax(n,0)<<endl;

    return 0;
}
