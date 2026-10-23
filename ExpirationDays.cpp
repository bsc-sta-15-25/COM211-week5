#include <iostream>
#include <random>
using namespace std;
int main() {
    random_device rd;
    mt19937 gen (rd());
    uniform_int_distribution<int>dist(0 , 11);
    int daysUntilExpiration = dist(gen);

    if (daysUntilExpiration == 0){
        cout <<"your subscription has expired"<<endl;
    }
    else if (daysUntilExpiration == 1){
        cout<<"Your subscription expires within a day"<<endl;
        cout<<"Renew now and save 20%"<<endl;
    }
    else if(daysUntilExpiration <= 5){
        cout<<"Your subscription expires in 5 days"<<endl;
        cout<<"renew now and save 10%"<<endl;
    }
    else if (daysUntilExpiration<= 10){
        cout<<"Your subscription wil expire soon"<<endl;
        cout<<"Renew now"<<endl;
    }
    else{
        cout<<"Your subscrition is active"<<endl;
    }
    return 0;


}