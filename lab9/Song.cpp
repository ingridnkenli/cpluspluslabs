#include <iostream>
#include <string>
#include <cstdlib>
#include "Song.h"
using namespace std;


Song::Song(string name, string artist){
  m_name = name;
  m_artist = artist;

}
void Song::Play(){
}
void Song::Skip(){
}
void Song::Lyrics(){
  cout <<"Parent Play | You love the song lyrics in" <<  m_name << "by" <<m_artist <<endl;

}



Indie::Indie(string name, string artist):Song(name, artist){
  //m_name = name;
  //m_artist = artist;
}
void Indie::Play(){
  cout << "You play your favorite indie song, " <<  m_name  <<" by " << m_artist <<endl;
}
void Indie::Skip(){
  cout <<" You are not in the mood to listen to the indie song " <<  m_name  << endl;
}




Pop::Pop(string name, string artist):Song(name, artist){
}
void Pop::Skip(){
  cout <<"You are not in the mood to listen to the pop song " << m_name << endl;
}
void Pop::Play(){
  cout <<"You play your favorite pop song, " << m_name << " by "<<  m_artist <<endl;
}
void Pop::Lyrics(){
  cout <<"You love the lyrics in the pop song" << m_name << " by" <<  m_artist <<endl;

}



