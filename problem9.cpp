//Find the Armstrong Numbers in a given Interval in C++

#include<iostream>
#include<math.h>
using namespace std;
int find_length(int N){ // returns the length of num
	int length = 0;

	while(N >0){
		length++;
		N = N/10;
	}
	return length;
}

bool armstrong_num(int N){ // check armstrong or not
	int l = find_length(N);
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
	int start , end;
	cin>>start>>end;
	for(int i=start ;i<=end ; i++){
		if(armstrong_num(i)){
			cout<<i<<",";
		}
	}
	return 0;
}