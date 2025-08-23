//C++ program to check whether a character is alphabet or not
//In C programming language a char type variable can store many different types of characters-
//
//Alphabets (a, b, c… )
//Digits(1, 2, 3…)
//Special characters(@, %, &…)
//These characters are differentiated on the basis of ASCII values :
//
//between 65 and 90 for upper case(A, B, C…)
//between 97 and 122 for lower case(a, b, c…)

//Get user input
//Check if input is between ‘A'(65) – ‘Z'(90) or between ‘a'(96) – ‘z'(122)
//If True print ‘Yes’
//If False print ‘No’

#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"enter any alphabet: "<<endl;
	cin>>ch;
	if((ch>='a' && ch <='z') || ch>='A' && ch<='Z'){
		cout<<ch<<" is an alphabet"<<endl;
	}
	else{
		cout<<ch<<" is not an alphabet"<<endl;
	}
	return 0;
}