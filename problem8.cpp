//Armstrong Number in C++
//Any number that satisfies the following format –
//
//abcd… = a^n + b^n + c^n + d^n + …
//Where n is the order(length/digits in number)
//That is for any number num if the sum
// of individual digits is raised to the power of order if the result is equal to the number itself then it is an Armstrong number.

#include<iostream>
#include<math.h>
using namespace std;
int find_length(int N){
	int length = 0;
	int temp = N;
	while(N >0){
		length++;
		N = N/10;
	}
	return length;
}

bool armstrong_num(int N , int l){
	l = find_length(N);
	int temp = N;
	int sum = 0;
	while(N>0){
		int digit=N%10;
		sum = sum + pow(digit , l);
		N=N/10;
	}
	return temp==sum;
	
}
int main(){
	int N;
	cin>>N;
	int l = find_length(N);
	if(armstrong_num(N , l)){
		cout<<"Yes , this is armstrong num"<<endl;
	}
	else{
		cout<<"No, not armstrong num"<<endl;
	}
    return 0;
}
