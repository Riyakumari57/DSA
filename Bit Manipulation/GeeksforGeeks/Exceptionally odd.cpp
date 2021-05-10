class Solution{   
public:
    int getOddOccurrence(int arr[], int n)
    {
        // code here
        unsigned int ans = 0, shift = 1;
     for(int i=0;i<32;i++)
     {
            int cnt = 0;
            for(int i=0;i<n;i++)
            {
            	if((arr[i]&shift)>0)
            	{
            		cnt+=1;
            	}
            }
               if(cnt%2!=0)
            	{
            		ans+=shift;
            	}
            	shift*=2;
     }

     return ans; 
    }
};
