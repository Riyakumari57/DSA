class Solution{
public:
    int swapNibbles(unsigned char x)
    {
        // code here
        x = (((x & 0x0F)<<4) | ((x & 0xF0)>>4));
        /*The expression âx & 0x0Fâ gives us the last 4 bits of data and The expression âx & 0xF0â gives us first four bits of data
        */
        return x;
    }
};
