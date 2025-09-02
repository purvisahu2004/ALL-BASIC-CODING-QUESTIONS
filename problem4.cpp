#include<iostream>
using namespace std;
//method1 mathematics
bool check_palindrome(int N){
	int original_num = N;
	int rev = 0;
	while(N > 0){
	   int 	r = N%10;
	   rev = rev*10 + r;
	   N/=10;
	   
	}
	return(rev == original_num);
}


//method2 recursion
int reversenum(int N , int rev=0){
	if(N==0)return rev;
	int 	r = N%10;
	rev = rev*10 + r;
	return reversenum(N/10 , rev);
}

bool check_palindrome(int N){
	if(N == reversenum(N)){
		return true;
	}
	else{
		return false;
	}
		
}


int main(){
	int N = 12321;
	int res = check_palindrome(N);
	if(res == 1){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
}

