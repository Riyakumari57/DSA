#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int k, int n, int ele)
{
    int f=0,mid;
    while (k <= n)
    {
        mid = (k + n) / 2;
        if (ele < a[mid])
        {
            n=mid-1;
        }
        else if (ele > a[mid])
        {
            k=mid+1;
        }
        else if (ele == a[mid])
        {
            f=1;
            break;
        }
    }
    if(f!=0)
    {
        cout << "Found at location " << mid << endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int element;
    cin >> element;
    BinarySearch(a, 0, n - 1, element);
}
