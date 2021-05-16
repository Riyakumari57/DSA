//Print first n natural numbers in reverse
#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    cout << n << " ";
    print(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print(n);
}