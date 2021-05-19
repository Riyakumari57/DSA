#include<iostream>
int sumofdig(int n){
	if(n==0)
		return n;
	else{
		n=(n%10)+sumofdig(n/10);
		return n;
	}
}
int main(){
	int n,x;
  cin>>n;
	x=sumofdig(n);
  cout<<x;
	return 0;
}
