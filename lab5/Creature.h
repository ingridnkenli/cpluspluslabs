/**********
* File: Creature.h
*
* Intended for Lab 5: Classes
*
**********/

#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>

using namespace std;

class Creature {
  //Declare public getter (accessors) and setter (mutators)
  //Declare two public functions void attack(); and void age();
public:
  Creature();
  string getSpecies();
  void setSpecies(string);
  int getAge();
  void setAge(int);
  bool getHostility();
  void setHostility(bool);
  void attack();
  void age();

private:
  string m_species;
  int m_age;
  bool m_isHostile;

  
};

#endif
