//We need the following to calculate power of number -
//Base : 5
//Exponent : 3
//Power = 53 = 125 

//method1
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int base = 5;
	int exponent =3;
	int power = pow(base , exponent);
	cout<<power<<endl;
	
}

//method2
#include<iostream>
using namespace std;
int main(){
	int base = 5;
	int exponent = 3;
	double power=1;
	for(int i=0;i<exponent;i++){
		power*=base;
		
	}
	cout<<power<<endl;
}


//methhod 3 recursion
#include<iostream>
using namespace std;
double power(int base , int exponent){
	if(base == 1 || exponent == 0){
		return 1;
	}
	return base * power(base , exponent-1);
	
}
int main(){
	int base=9;
	int exponent =3;
	int res = power(base , exponent);
	cout<<res<<endl;
}









