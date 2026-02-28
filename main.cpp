#include <iostream>

using namespace std;

long long arr[1005];

long long calculateSum(int n,int i)
 {
    if (i==n)
    {
        return 0;
    }

    return arr[i]+calculateSum(n,i+1);
}

int main()
{
    int n;
    cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<calculateSum(n,0)<<endl;

    return 0;
}
