#include <iostream>

int main() {
using namespace std;
    int num;
    cout<<"Ingrese numeros, el programa acabara cuando ingrese un numero PAR:" << endl;
    do {
        cin>>num;
    } while(num%2 != 0);
    cout<<"Fin"<<endl;
    return 0;
}



