#include<bits/stdc++.h>
using namespace std;
set<string>s;
void solve(string ip , string op)
{
    if(ip.length()==0)
    {
        s.insert(op);
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
    for(auto x: s)
    {
        cout<<x<<endl;
    }
}
