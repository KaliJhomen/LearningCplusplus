#include <iostream>
using namespace std; 
int main (){
	double counter, number, sum;
 	counter=0;
 	cout <<"Enter 10 numbers"<<endl;
 	cin>> number;
	while (counter < 9) {
		cout <<"Enter the next number: "<<endl;
		cin>> number;
		sum +=number;
		counter ++;
	}
	cout << "The sum of the numbers is: "<<sum;
	
return 0;
}

    
