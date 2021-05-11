//HIGHEST POWER OF 2 LESS THAN OR EQUAL TO GIVEN NUMBER 
int powerOfTwo(int n)
{
    int res = 0;
    while ((1 << res) <= n)
    {
        res++;
    }

    return 1<<res-1;
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n);
}
