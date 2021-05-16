//Print n natural even numbers

/* Method 1
 A PrintEven function which will compute all the natural even numbers under a given particular number */
#include<bits/stdc++.h>
using namespace std;
void PrintEven(int n)
{
    if(n==1)
    {
        return;
    }
    PrintEven(n-1);
    if(n%2==0)
    {
        cout<<n<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    PrintEven(n);
}



/* Method 2
PrintEvenofeven function will print the even numbers under a given number which is also even
whereas
PrintEvenofodd will print the even numbers under a given number which is odd.
 */
void PrintEvenofeven(int n)
{
    if(n==2)
    {
        cout<<n<<" ";
        return;
    }
    PrintEvenofeven(n-2);
    cout<<n<<" ";
}

void PrintEvenofodd(int n)
{
     if(n==2)
    {
        cout<<n<<" ";
        return;
    }
    PrintEvenofeven(n-2);
    cout<<n<<" ";
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
