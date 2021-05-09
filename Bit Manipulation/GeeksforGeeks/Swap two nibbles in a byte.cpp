class Solution{
public:
    int swapNibbles(unsigned char x)
    {
        // code here
        x = (((x & 0x0F)<<4) | ((x & 0xF0)>>4));
        /*The expression “x & 0x0F” gives us the last 4 bits of data and The expression “x & 0xF0” gives us first four bits of data
        */
        return x;
    }
};
