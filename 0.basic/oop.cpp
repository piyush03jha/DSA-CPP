#include <iostream>
#include <vector>
using namespace std;

class Chai {
    public:
        //data members (attributes)
         string teaName;
         int serving; 
         vector<string> ingredients;

        //member function

        void displayChaiDetails(){
            cout<< "Tea name:"<< teaName<< endl;
            cout<< "serving:"<< serving<< endl;
            cout<<"ingedrients:";
            for(string ingredient : ingredients){
                cout<<ingredient<<" ";
            }
            cout<< endl;
        }
};

int main(){
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.serving = 2;
    chaiOne.ingredients = {"water","lemon","honey","teaLeaves"};

    chaiOne.displayChaiDetails();
    return 0;
}