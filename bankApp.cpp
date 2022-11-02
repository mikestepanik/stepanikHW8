/** File name: bankApp.cpp
 * *   This app takes no arguments and simpply displays the name of each bank account and the balence.
 * *   Written by Mike Stepanik Nov 1, 2022.
 * */

#include <iostream>
#include "bankAccount.h"
#include <string>

using namespace std;

int main(int argc, char*argv[]){

BankAccount jackAccount("Jack Smith", 50);
BankAccount jillAccount("Jill Brian", 100);

 BankAccount bankArray[3] = { BankAccount("Ralph Kramden",10),BankAccount("Alice Kramden",20), BankAccount("Ed Norton", 30) };

//deposit 30 in all accounts
jackAccount.deposit(30);
jillAccount.deposit(30);
bankArray[0].deposit(30);
bankArray[1].deposit(30);
bankArray[2].deposit(30);

//withdraw 20 from all accounts
jackAccount.withdraw(20);
jillAccount.withdraw(20);
bankArray[0].withdraw(20);
bankArray[1].withdraw(20);
bankArray[2].withdraw(20);


cout<<endl;
cout <<"The name on jackAccount is " << jackAccount.getName() << endl;
cout <<"The balence on jacks account is:  " << jackAccount.getBalance() << endl;
cout<<endl;

cout <<"The name on jillAccount is " << jillAccount.getName() << endl;
cout <<"The balence on jills account is:  " << jillAccount.getBalance() << endl;
cout<<endl;

cout <<"The name on bankArray[0] account is " << bankArray[0].getName() << endl;
cout <<"The balence on bankArray[0] account is:  " << bankArray[0].getBalance() << endl;
cout<<endl;

cout <<"The name on bankArray[1] account is " << bankArray[1].getName() << endl;
cout <<"The balence on bankArray[1] account is:  " << bankArray[1].getBalance() << endl;
cout<<endl;

cout <<"The name on bankArray[2] account is " << bankArray[2].getName() << endl;
cout <<"The balence on bankArray[2] account is:  " << bankArray[2].getBalance() << endl;
cout<<endl;

return 0;
}
