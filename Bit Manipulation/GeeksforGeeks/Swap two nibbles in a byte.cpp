class Solution{
public:
    int swapNibbles(unsigned char x)
    {
        // code here
        x = (((x & 0x0F)<<4) | ((x & 0xF0)>>4));
        return x;
    }
};
