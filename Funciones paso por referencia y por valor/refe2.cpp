#include <iostream>
#include <cmath>
using namespace std; 
void squareIt (int &n){
	n=pow(n,2);
} 
int main()
{
  int n=0; 
  cout<< "Enter a number to square it"<<endl;
  cin >>n;
  cout<< "The number is " <<n<<endl;
  squareIt(n); 
  cout<<"After squaring it is "<<n<<endl;
  return 0;
}





