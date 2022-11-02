/** File name: bankAccount.cpp
 * *
 * *   Class for performing simple bankAccount operations
 * *   Written by Mike Stepanik, Nov 1, 2022.
 * */

#include <iostream>
#include "bankAccount.h"
#include <string>
using namespace std;

//constructor
BankAccount::BankAccount(string name, float bal){
	balance=bal;
	customerName=name;
}


void BankAccount::setName(string n){
	customerName=n;
}

void BankAccount::setBalance(float bal){
	balance=bal;
}

string BankAccount::getName(){
	return customerName;
}

float BankAccount::getBalance(){
	return balance;
}

void BankAccount::deposit(float dep){
	balance=balance+dep;

}

void BankAccount::withdraw(float draw){
	balance=balance-draw;
}

BankAccount::~BankAccount(){
	  // cout << "destroying the BankAccount..." << endl;
}
    
