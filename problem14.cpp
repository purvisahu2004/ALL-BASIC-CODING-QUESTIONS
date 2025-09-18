//Program to check whether a number is an Automorphic number or not
//An Automorphic number is a special number, whose’s square ends with the same digits as the number itself

#include<iostream>
using namespace std;
bool check_automorphic(int N){
	int sq = N*N;
	while(N>0){
		if(N%10 != sq%10){  // base case
			return false;
		}
		N/=10;
		sq/=10;
	}
	return true;
}
int main(){
	int N;
	cin>>N;
	if(check_automorphic(N)){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
}