//Print n natural even numbers
/* Method 1 */

#include<bits/stdc++.h>
using namespace std;
void PrintEven(int n)
{
    if(n==1)
    {
        return;
    }
     if(n%2==0)
    {
        cout<<n<<" ";
    }
    PrintEven(n-1);

}
int main()
{
    int n;
    cin>>n;
    PrintEven(n);
}


/*Method 2*/

void PrintEvenofeven(int n)
{
    if(n==2)
    {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    PrintEvenofeven(n-2);
}

void PrintEvenofodd(int n)
{
     if(n==2)
    {
        cout<<n<<" ";
        return;
    }
     cout<<n<<" ";
    PrintEvenofeven(n-2);
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    PrintEvenofeven(n);
    else
    PrintEvenofodd(n-1);
}
