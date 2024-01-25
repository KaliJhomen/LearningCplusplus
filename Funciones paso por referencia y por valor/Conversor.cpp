#include <iostream>
//Paso por Valor
using namespace std;
	double convertToMeters(double km){
		return km*1000;
	}	
	double convertToKilometers(double m){
		return m/1000;
	}
int main (){
char ans;
double dist;
cout<<"What do you want to convert? M for meters and K for kilometers"<<endl;
cin>>ans;
if (ans=='M'||ans=='m'){
	cout<<"Enter the distance in meters: "<<endl;
	cin>>dist;
	double converted= convertToKilometers(dist);
	cout<<dist<<" meter(s) are equal to "<<converted<<" kilometer(s)";
}
else if (ans=='K'||ans=='k'){
	cout<<"Enter the distance in kilometers: "<<endl;
	cin>>dist;
	double converted= convertToMeters(dist);
	cout<<dist<<" kilometer(s) are equal to "<<converted<<" meter(s)";	
}	else {return 1;
}
return 0;
}
