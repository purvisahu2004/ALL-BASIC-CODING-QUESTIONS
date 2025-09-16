// Program to check whether a number is a Strong Number or not
//For Example: 145 
//145 = 1! + 4! + 5! =  145

#include<iostream>
using namespace std;
int factorial(int N){
	if(N==0 || N==1){
		return 1;
	}
	return N*factorial(N-1);
}

bool check_strong_num(int N){
    int original_num = N;
	int sum=0;
	while(N>0){
		int digit = N%10;
		int temp = factorial(digit);
	
		sum+=temp;
		N/=10;
	}
	return sum == original_num;
}
int main(){
	int N=145;
	if(check_strong_num(N)){
		cout<<"yes,this is strong num"<<endl;
	}
	else{
		cout<<"no,this is not strong num"<<endl;
	}
}