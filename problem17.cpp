//Number of days in a given month of a given year in C++

//method1 using if else
#include<iostream>
using namespace std;
int main(){
	int month;
	cout<<"number of month in a year 1-12: "<<endl;
	cin>>month;
	int year;
	cout<<"enter year: "<<endl;
	cin>>year;
	if(month == 2){
		if(year%4==0 && year%100!=0 ){
			cout<<"no. of days is 29 "<<endl;
		}
		else{
			cout<<"no of days if 28 days"<<endl;
		}
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
        cout<<"Number of days is 31";
    }
    else if(month==4 || month==6 || month==9 || month==11){
        cout<<"Number of days is 30";
    }
    else cout<<"Invalid month";
    
	return 0;
}

//method2 using switch case
#include<iostream>
using namespace std;
int main(){
	int month;
	cout<<"number of month in a year 1-12: "<<endl;
	cin>>month;
	int year;
	cout<<"enter year: "<<endl;
	cin>>year;
	
	switch (month)
	{
		case 1:
		  cout<<"no of days is 31";
		break;
		case 2:
		if((year%400==0) || (year%4==0 && year%100!=0)){
			cout<<"no. of days is 29 "<<endl;
		}
		else{
			cout<<"no of days is 28 days"<<endl;
		}
        break;
		case 3:
		cout<<"no of days is 31";
		break;
		case 4:
		cout<<"no of days is 30";
		break;
		case 5:
		cout<<"no of days is 31";
		break;
		case 6:
		cout<<"no of days is 30";
		break;
		case 7:
		cout<<"no of days is 31";
		break;
		case 8:
		cout<<"no of days is 31";
		break;
		case 9:
		cout<<"no of days is 30";
		break;
		case 10:
		cout<<"no of days is 31";
		break;
		case 11:
		cout<<"no of days is 30";
		break;
		case 12:
		cout<<"no of days is 31";
		break;
		default:
        cout<<"Invalid Month.";
        break;
	}
}


//method3 using array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int month = 12, year=2012;
    
    //For checking leap year
    if(month==2 && ((year%400==0) || ((year%100!=0)&&(year%4==0))))
        cout<<"Number of days is "<< arr[month-1]+1;
    
    else cout<<"Number of days is"<<arr[month-1];
   
    
    return 0;
}























