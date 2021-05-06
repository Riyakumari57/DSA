 int findPosition(int N) 
    {
        // code here
        int cnt =0,temp ;
        for(int i=0;i<32;i++)
        {
            if(N&(1<<i))
            {
                cnt++;
                 temp = i;
            }
            
        }
        
        if(cnt>1 || cnt==0)
        {
            return -1;
        }
        else
        {
            return temp+1;
        }
    }