#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& num , int n)
{

	unsigned int ans = 0, shift = 1;
     for(int i=0;i<32;i++)
     {
            int cnt = 0;
            for(auto ele: num)
            {
            	if((ele&shift)>0)
            	{
            		cnt+=1;
            	}
            }
               if(cnt%3!=0)
            	{
            		ans+=shift;
            	}
            	shift*=2;
     }

     return ans;
}


int main()
{
	int  t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>num(n);
		for(int i=0;i<n;i++)
		{
			cin>>num[i];
		}

		cout<<solve(num,n)<<endl;

	}
}