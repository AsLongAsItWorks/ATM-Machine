#include<iostream>
using namespace std;

void showMenu(){
    cout << "******MENU******" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
    cout << "****************" << endl;
}

int main() {
    short option = 0;
    float balance = 500;

    do{

    
    showMenu();
    cout << "Option (1-4): ";
    cin >> option;
    system("cls");
    
    switch(option){
        case 1: cout << "Balance is: " << balance << " $" << endl;break;
        case 2: cout << "Deposit amount: ";
            float depositAmount;
            cin >> depositAmount;
            balance+= depositAmount;
            break;
        case 3: cout << "Withdraw amount: ";
            float withdrawAmount;
            cin >> withdrawAmount;
            if(withdrawAmount <= balance){
                balance -= withdrawAmount;
            } else{
                cout << "Not enough money";
            }
            break;
        
    }
    }while(option != 4);
}