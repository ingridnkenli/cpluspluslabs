#include <iostream>

using namespace std;

// Constants go here
const int START_ATM = 1000;
const int START_WALLET = 100;

void withdraw(double&, double&);
void deposit(double*, double*);

int main()
{
  double atm = START_ATM;
  double wallet = START_WALLET;

  cout << "Welcome to the ATM." << endl;
  cout << "The ATM contains " << atm << " dollars" << endl;
  cout << "Your wallet contains " << wallet << " dollars" << endl;
  cout << endl;
  
  withdraw(atm, wallet);

  cout << endl;
  cout << "ATM contains " << atm << " dollars" << endl;
  cout << "Wallet contains " << wallet << " dollars" << endl;
  cout << endl;
  
  deposit(&atm, &wallet);

  cout << endl;
  cout << "ATM contains " << atm << " dollars" << endl;
  cout << "Wallet contains " << wallet << " dollars" << endl;
  
  return 0;
}

// Implement withdraw and deposit here

void withdraw(double atm&, double wallet&){

  




}
