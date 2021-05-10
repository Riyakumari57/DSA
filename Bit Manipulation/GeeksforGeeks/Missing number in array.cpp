class Solution{
  public:
    int MissingNumber(vector<int>& v, int n) 
    {
        long long int x = v.size(), z;
    sort(v.begin(), v.end());
    if(x==1)
    {
      if(v[0]==1) return 2;
      else return 1;
    }
    if((v[0]&(1<<0))==0) return 1;
    for (long long int i = 0; i <n-1; i++)
    {
        if((v[i]&(1<<0))==(v[i+1]&(1<<0)))
        {
            z=i+2;
            return z;
            break;
        }
    }
     return n;
    }
};
