//Sum of first n natural numbers
#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n==1)
    {
        return n;
    }
      return n+(solve(n-1));
}
int main()
{
    int n,x=0;
    cin>>n;
    
    x=solve(n);
    cout<<x;
}
