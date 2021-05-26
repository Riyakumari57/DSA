#include <bits/stdc++.h>
using namespace std;
int BinarySearch(int a[], int k, int n, int ele)
{
    int f=0;
       int  mid = (k + n) / 2;
        if (ele < a[mid])
        {
         return  BinarySearch(a, 0, mid-1, ele);
        }
        else if (ele > a[mid])
        {
          return  BinarySearch(a, mid+1, n, ele);
        }
        else if (ele == a[mid])
        {
            return mid;
        }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(a[0]);
    int ele;
    cin >> ele;
    cout<<BinarySearch(a, 0, n - 1, ele);
}
