#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        //Pair Sum XOR of the array
        int x = 0;
        for(int i = 0;i<n;i++)
        {
            x = x^(2*v[i]);
        }

        cout<<x<<endl;
    }
}
