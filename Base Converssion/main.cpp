#include <iostream>

using namespace std;

void convertToBinary(int n)
 {
    if (n==0)
    {
        return;
    }

    convertToBinary(n/2);
    cout<<n%2;
}

int main() {

    int t;
    cin>>t;
    {
        while(t--)
        {
            int n;
            cin>>n;

            if (n==0)
            {
                cout<<"0";
            }
             else
            {
                convertToBinary(n);
            }
            cout <<"\n";
        }
    }

    return 0;
}
