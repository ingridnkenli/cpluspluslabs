#include <iostream>
using namespace std;
int divThree(int[], int);





int main(){
   const int MAXSIZE = 100;
   int myArray[MAXSIZE] = {0};
   int currSize = 0;
   int inputValue;
   int number;
   //Code to take in values and print results goes here
   
   cout << "Enter a value (0 when done): ";
   cin >> inputValue;

   while (inputValue != 0 && currSize < MAXSIZE){

     myArray[currSize] = inputValue;
     currSize++;

     cout << "Enter a value(0 when done): ";
     cin >> inputValue;

     }

   
   cout <<"Original array: ";   
   for (int i=0;i<currSize;i++){
     cout << myArray[i] << " ";

   }
   cout<<endl;
   
   number = divThree(myArray, currSize);
   cout <<"The array contains " << number << "numbers divisible by 3. "<<endl;

   cout << "Modified Array ";
   for(int i=0;i<currSize;i++){
     cout << myArray[i]<< " ";

   }
   cout <<endl;
   return 0;
}

//implement divThree here

int divThree(int array[],int length){
  
  int count = 0;
  for(int i=0;i< length;i++){

    if (array[i] % 3 == 0){
      count += 1;
      array[i] = array[i]/3;
    }
     
   
  }
  
  return count;

}

