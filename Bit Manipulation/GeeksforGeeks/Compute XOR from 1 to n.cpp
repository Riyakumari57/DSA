//compute XOR from 1 to N
#include <bits/stdc++.h>
using namespace std;
int ComputeXor(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
int main()
{
    int n;
    cin >> n;
    cout << ComputeXor(n);
}
