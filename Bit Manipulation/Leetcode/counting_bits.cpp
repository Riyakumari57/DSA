#include<bits/stdc++.h>
using namespace std;

vector<int>solve(int num)
{
     vector<int> v;
     for(int i =0;i<=num;i++)
     {
          int cnt = 0;
        int num = i;
        while(num>0)
        {
            cnt++;
            num = num &(num-1);
        }
       v.push_back(cnt);
     }
     return v;
}


int main()
{
    int test;
    cin>>test;
    vector<int>v1;
    while(test--)
    {
        int num;
        cin>>num;
       v1 =  solve(num);
        for (auto i = v1.begin(); i != v1.end(); ++i)
        cout << *i << " ";
        cout<<endl;
    }
}