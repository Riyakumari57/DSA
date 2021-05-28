//Print subsets
/*                                                              o/p              i/p

                                                              "   "            "ab"
                                                              
                                                                        /      \
                                                                      /          \
                                                                    /              \
                            (not taking "a" in the subset)  o/p1  i/p               o/p2   i/p   (taking "a" in the subset)
                                                             "  "     "b"                  "  a"   "b"
                                                               /   \                        /      \  
                                                             /       \                    /          \    
                                                           /           \                /              \ 
                                                           
                                                    o/p1  i/p        o/p2   i/p         o/p1  i/p          o/p2   i/p 
                                             (not taking "b")        (taking "b")      (not taking "b")        (taking "b")
                                               "  "       " "         " b"  "  "       "  a"   " "           "  ab"   " "
 At last when each input length becomes zero then we will get the output as our final asnwer .
                                                                     
*/
#include<bits/stdc++.h>
using namespace std;
void solve(string ip , string op)
{
    if(ip.length()==0)
    {
        cout<<op<<endl;
        return;
    }
    string op1= op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}

int main()
{
    string ip;
    cin>>ip;
    string op=" ";
    solve(ip,op);
}


