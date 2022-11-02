/** File name: bankAccount.h
 *  Class for performing simple bank acocunt operations 
 * The bank account is used to deposit, withdraw and check the balance. The application shall 
 * contain one class whose interface; i.e. header file, is the following:.
 *   Written by Mike Stepanik, Nov 1, 2022.
 *
 *
 */

#ifndef bankAccount_H
#define bankAccount_H

#include <string>


using namespace std;


class BankAccount {
	private:
		string customerName;
		float balance;
	virtual	void setName(string n);
	virtual	void setBalance(float bal);
	public:
		BankAccount(string n, float bal);
		string getName();
		float getBalance();
	virtual	void deposit(float dep);
	virtual	void withdraw(float draw);
		~BankAccount();
};


#endif
