#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    ;
    cin >> a >> b;
    // swapping two variables
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
   //variables swapped
   cout<<" a is "<<a<<" b is "<<b;
}
