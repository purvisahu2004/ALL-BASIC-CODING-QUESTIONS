//Finding Prime Factors of a Number in C++

#include<iostream>
using namespace std;
bool check_prime(int N){
	for(int i =2;i*i<=N;i++){
		if(N %i==0){
			return false;
		}
		
	}
	return true;
}
void find_factor(int N){
	for(int i=2;i<=N;i++){
		while(N%i==0 && check_prime(i) ){
			cout<<i<<" ";
			N/=i;	
		}
	}	
}
int main(){
	int N= 45;
	find_factor(N);
	
	return 0;
}