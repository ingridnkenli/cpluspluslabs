#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Song{
public:
  Song(string name, string artist);
  virtual void Play();
  virtual void Skip();
  virtual void Lyrics();
protected:
  string m_artist;
  string m_name;
};


class Pop: public Song{

public:
  Pop(string name, string artist);
  void Play();
  void Skip();
  void Lyrics();

};

class Indie: public Song{
public:
  Indie(string name, string artist);
  void Play();
  void Skip();

};


#endif

