CXX = g++
CXXFLAGS = -Wall

lab9: Song.o lab9.cpp
	$(CXX) $(CXXFLAGS) Song.o lab9.cpp -o lab9
Song.o: Song.h Song.cpp
	$(CXX) $(CXXFLAGS) -c Song.cpp
