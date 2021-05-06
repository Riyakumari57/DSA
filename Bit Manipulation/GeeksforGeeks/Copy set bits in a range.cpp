#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, l, r;
    cin >> a >> b >> l >> r;
    for (int i =1; i <=32; i++)
    {
        if (i >= l && i <= r)
        {
            if (b & (1 << (i-1)))
            {
                if(!(a&(1<<(i-1))))
            {
                // cout<<" i is "<<i<<endl;
                a += pow(2, i-1);
            }

            }
              
        }
    }

    cout << a << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}