#include <iostream>
#include "Creature.h"
using namespace std;


int main(){

  Creature gentleCreature;
  Creature meanCreature;

  //initialize and set up
  gentleCreature.setSpecies("toucan");
  gentleCreature.setHostility(false);
  gentleCreature.setAge(24);

 
  cout << "This creature is a " << gentleCreature.getSpecies() <<endl;
  cout << "The creature is "<< gentleCreature.getAge()<<endl;
  if(gentleCreature.getHostility() == false){
    cout << "The " << gentleCreature.getSpecies() << "is not hostile." <<endl;
  }else {
    cout << "The " << gentleCreature.getSpecies() << " is hostile. Watch out!" << endl;
  }
  
  gentleCreature.age();
  cout <<"The creature is now "<< gentleCreature.getAge() <<endl;
  gentleCreature.attack();

  cout << endl;
  //initialize and set up
  meanCreature.setSpecies("rattlesnake");
  meanCreature.setHostility(true);
  meanCreature.setAge(6);
    
  cout << "This creature is " << meanCreature.getAge()<<endl;
  cout << "This creature is a " << meanCreature.getSpecies() <<endl;
  if(meanCreature.getHostility() == false){
    cout << "The " << meanCreature.getSpecies() << "is not hostile." <<endl;
  }else {
    cout << "The " << meanCreature.getSpecies() << "is hostile. Watch out!" << en\
dl;
  }

  
  meanCreature.age();
  //display new age and attack
  cout <<"The creature is now "<< meanCreature.getAge()<<endl;
  meanCreature.attack();

  

  return 0;
}
