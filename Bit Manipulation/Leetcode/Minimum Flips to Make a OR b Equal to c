#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c)
{
    int res = 0;
    // we have taken i<32 because we are taking 32 bit integer
    for (int i = 0; i < 32; i++)
    {
        bool x = false, y = false, z = false;
        if (a & (1 << i))
            x = true;
        if (b & (1 << i))
            y = true;
        if (c & (1 << i))
            z = true;
        if (z == false)
        {
            if (x == true & y == true)
                res += 2;
            else if (x == true || y == true)
                res++;
        }
        else
        {
            if (x == false && y == false)
                res++;
        }
    }
    return res;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << solve(a, b, c);
    }
}
