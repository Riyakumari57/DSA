//Permuation with spaces 
/*                                                  op           ip
                                                   "  "         "ABC"
                                                         |          
                                                         |        
                                                         |
                                                      op   ip
                                                     "A"   "BC"
                                                        /\
                                                       /  \
                                                      /    \
                                            op      ip      op      ip       
                                           "A B"    "C"     "AB"    "C"
                                                /\                  /\  
                                               /  \                /  \
                                              /    \              /    \
                                   op    ip      op    ip      op      ip     op    ip       
                                "A B C"  " "    "A BC"  " "     "AB C" " "   "ABC"   " "
                                OUTPUT-:
                                 A B C
                                 A BC
                                 AB C
                                 ABC
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
    string op1 = op;
    string op2 = op ;
    op1.push_back(' ');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);


}
int main()
{
    string ip;
    cin>>ip;
    string op;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op);
}
