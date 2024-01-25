#include <iostream>
using namespace std; 
int main (){
	double n1,n2,n3, max;
	
	cout << "Ingrese 3 numeros "<<endl; 
	cin >> n1>>n2>>n3;

	max= n1;
	
	if (n2>max) 
		max=n2;
	else if (n3>max)
		max=n3;
	
	cout <<"El mayor es "<<max<<endl; 
	
	return 0;
}
