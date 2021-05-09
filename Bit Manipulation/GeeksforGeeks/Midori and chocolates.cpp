class Solution {
  public:
    long long int leftShops(long long int i, long long int L)
    {
        // code here
        long long int N = 1<<L;
        return N-i;
    }
};
