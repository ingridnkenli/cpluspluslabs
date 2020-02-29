/*
 * lab2.cpp
 * This program tests skills regarding input/output, loops, functions in C++.
 */

#include <iostream>
using namespace std;

void isEven(int total);
int sumInts(int frequency);



int main() {
 
  int num = 0; 
  cout << "How many integers do you want to add?" <<endl;
  cin >> num;
  isEven(sumInts(num));
  return 0;
}


//Name: sumInts
//Purpose: Given the number of integers to enter as a parameter, the function
//	   will request the user to enter that many integers, displaying and
//	   returning the sum once all numbers have been entered.
int sumInts(int frequency){
  int count = 0;
  int total = 0;
  int var = 0;
  while(count < frequency){
    cout << "Enter an integer: " << endl;
    cin >> var;
    total += var;
    count += 1;
  }
  cout << "Sum: "<< total << endl;
  return total;
}

//Name: isEven
//Purpose: Given an integer as a parameter, the function will display whether
//	   it is even or odd.
void isEven(int var){

  
  if(var % 2 ==0)
    cout << "Even." <<endl;
  else
    cout << "Odd." <<endl;

}
