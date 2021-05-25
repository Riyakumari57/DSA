#include<bits/stdc++.h>
using namespace std;

int nth_fibonnaci(int n){
    //base case
    if(n==0 || n==1) return n;
    //recursive case
    return nth_fibonnaci(n-1) + nth_fibonnaci(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<nth_fibonnaci(n)<<endl;
}



  /*
                            Recursion tree
                            
                           fib(5)   
                     /                \
               fib(4)                fib(3)   
             /        \              /       \ 
         fib(3)      fib(2)         fib(2)   fib(1)
        /    \       /    \        /      \
  fib(2)   fib(1)  fib(1) fib(0) fib(1) fib(0)
  /     \
fib(1) fib(0)


Time Complexity: T(n) = T(n-1) + T(n-2) which is exponential. 

*/
