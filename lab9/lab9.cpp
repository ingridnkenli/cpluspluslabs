#include "Song.h"
#include <iostream>
using namespace std;

int main () {

  Song newSong ("I Don't Love You", "My Chemical Romance");
  Indie indie1("New Slang", "The Shins");
  Pop pop1("thank u, next", "Ariana Grande");

  Song * song1 = &newSong;
  Song * song2 = &indie1;
  Song * song3 = &pop1;

  cout << "Example 1 – Parent Class" << endl;
  song1->Lyrics();
  
  cout << "Example 2 - Child Class(Indie)" <<endl;
  song2->Play();
  song2->Skip();

  cout << "Example 3 - Child Class (Pop)" << endl;
  song3->Play();
  song3->Skip();
  song3->Lyrics();

  return 0;
}
