#include <iostream>
#include <cstdlib>
#include <ctime>
//Paso por Valor
using namespace std;
	void func(int &a, int &b){
	a= a+b;
	b= b*2;
}
int main() {
   srand(time(0));
    int ran1=rand() % 100 + 1;
    int ran2=rand() % 100 + 1;
    cout <<"The first random number is: "<<ran1<<", and the secon one is: " <<ran2 <<endl;
    func(ran1, ran2);
	    cout <<endl<< "Values after the function:"<<endl;
	    cout << "1: " <<ran1<<", 2: "<<ran2<<endl;
   return 0;
}

