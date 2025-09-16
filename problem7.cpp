//Finding the Nth Term of the Fibonacci Series in C++
//The General formula for the Fibonacci series is
//
//Fn = Fn-1 + Fn-2
//Where Fn is the Output.


#include<iostream>
using namespace std;
int fibonacci_num(int N){
	if(N==0)return 0;
	if(N==1)return 1;
	return fibonacci_num(N-1)+ fibonacci_num(N-2);
}
int main(){
	int N;
    cin>>N;
    int res = fibonacci_num(N);
    cout<<res<<endl;
}