#include <iostream>
#include <cstdlib>
#include <ctime>
//Paso por Valor
using namespace std;
double wallet=0;
double deposit(double qtty) {
    return wallet+qtty;
}
double withdrawal(double qtty) {
    return wallet-qtty;
}
int main() {
    srand(time(0));
    wallet=rand() % 5000 + 1;
    char user[50];
    int action,password,qtty,ans;

    cout<<"----BCP----"<<endl;
    cout<<"Enter your User: "<<endl;
    cin.getline(user, 50);

    cout<<"Enter your password (6 digits): "<<endl;
    cin>>password;

    if (password<100000||password>999999){
        cout<<"Enter a valid 6-digit password"<<endl;
        return 1;
    } else{
        do{
            cout<<"Welcome "<<user<<", you have "<<wallet<<" soles in your account"<<endl;
            cout<<"What do you wanna do? Enter 1 for a deposit or enter 2 for a withdrawal"<<endl;
            cin>>action;

            if (action==1) {
                cout<<"How much do you wanna deposit into your account? (You have "<<wallet<<" soles)"<<endl;
                cin>>qtty;
                wallet=deposit(qtty);
                cout<<"Your new balance is "<<wallet<<" soles"<<endl;
            } else if(action==2) {
                cout<<"How much do you wanna withdraw from your account? (You have "<<wallet<<" soles)"<<endl;
                cin>>qtty;
                wallet=withdrawal(qtty);
                cout<<"Your new balance is "<<wallet<<" soles"<<endl;
            }
            cout<<"Do you want to do another operation? (1 for yes and 2 for no)"<<endl;
            cin>>ans;
        } while(ans==1);
        cout<<"Thank you for choosing BCP"<<endl;
        return 0;
    }
}

