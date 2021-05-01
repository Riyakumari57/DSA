#include <bits/stdc++.h>
using namespace std;
int solve(int num)
{
    int cnt = 0;
    while (num != 0)
    {
        int x = 1;
        x = x << 0;

        if ((num & x) == 0)
        {
            cnt++;

            num = num / 2;
        }
        else
        {
            cnt++;

            num = num - 1;
        }
    }
    return cnt;
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int num;
        cin >> num;
        cout << solve(num);
    }
}