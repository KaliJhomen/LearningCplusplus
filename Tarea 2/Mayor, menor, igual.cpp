#include <iostream>
using namespace std; 
int main (){
	double n1,n2;
	cout << "Ingrese un n�mero "; 
	cin >> n1;
	cout << "Ingrese el otro n�mero ";
	cin >> n2;
	if (n1>n2) {
		cout << "El numero "<<n1<<" es mayor " <<endl; 
	}
	else if (n1<n2){
		cout << "El numero "<<n2<<" es mayor " <<endl; 
	}
	else if (n1=n2){
		cout<< "Son iguales "<<endl; 
	}
	
return 0; 
}
