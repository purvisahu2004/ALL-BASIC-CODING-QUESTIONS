//Program to print Fibonacci series up to N  numbers

//Following is Fibonacci Series -
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
//More Mathematical terms
//F(n) = F(n-1) + F(n-2)
//Always, F(0) = 0, F(1) = 1

//method1 simple
#include<iostream>
using namespace std;
int main(){
	  int f0 = 0;
	  int f1 = 1;
	  int N;
	  cin>>N;
	  for(int i=2;i<N;i++){
	  	  int fn =  f0 + f1;
	  	  f0 = f1;
	  	  f1 = fn;
	  	  cout<<fn<<" ";
	  }
	  return 0;
}

//method2 recursion
#include<iostream>
using namespace std;
int fib_series(int N){
      if (N==0){
      	return 0 ;
	  }
	  if(N ==1){
	    return 1;
	  }
	  return fib_series(N-1) + fib_series(N-2);
	  
}
int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		cout<<fib_series(i)<<" ";
	}
	return 0;
}