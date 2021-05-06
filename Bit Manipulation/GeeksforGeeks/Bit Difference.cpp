class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {
        int ans =0;
        // Your logic here
        for(int i=0;i<32;i++)
        {
            bool x = false, y = false;
            if(a&(1<<i))
            x=true;
            if(b&(1<<i))
            y=true;
            
            if(y!=x)
            ans++;
            
        }
        
        return ans;
    }
};