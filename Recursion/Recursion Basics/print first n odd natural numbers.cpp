//print first n odd natural numbers
/* Method 1*/
#include <bits/stdc++.h>
using namespace std;

void Printoddfromodd(int n)
{
    if(n==1)
    {
       cout<<n<<" ";
       return;
    }
      Printoddfromodd(n-2);
      cout<<n<<" ";
}

void   Printoddfromeven(int n)
{
     if(n==1)
    {
       cout<<n<<" ";
       return;
    }
      Printoddfromodd(n-2);
      cout<<n<<" ";
}
int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        Printoddfromodd(n);
    }
    else
    {
        Printoddfromeven(n-1);
    }
}




/*Method 2*/
#include<bits/stdc++.h>
using namespace std;
void  Printodd(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    Printodd(n-1);
    if(n%2!=0)
    {
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    Printodd(n);
}
