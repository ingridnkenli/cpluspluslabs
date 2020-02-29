#include <iostream>
#include <string>
#include "StudentRecord.h"

using namespace std;

/*
  Initialize member variables in the constructor and dynamically allocate memory 
  where necessary.
*/
StudentRecord::StudentRecord(string name, int numOfCourses) {
  m_name = &name;
  m_numOfCourses = numOfCourses;
  m_scores = new int[numOfCourses];
}

StudentRecord::~StudentRecord() {
  cout << "destructor called " << endl;
  // De-allocate any dynamically allocated memory here...
  delete [] m_scores;
}

int* StudentRecord::GetScoreLocation() {
  // One line of code should do the 'trick' here.
  return m_scores;
}

void StudentRecord::PrintScores() {
  cout << "The list of scores is as follows..." << endl;
  // Iterate and display the stored scores for the student  
  for (int i=0; i< m_numOfCourses; i++){
    cout << "score for course " << i+1 << "is " << m_scores[i] <<endl;
  }
}

// Request score values for each course, calculate and return the average score.
double StudentRecord::GetAverageScore() {
  for (int i = 0; i < m_numOfCourses; i++){
    cout <<" Please enter score for Course # "<< i+1;
    cin >> m_scores[i];
  }

  double total = 0;

  for (int i=0;i < m_numOfCourses; i++){
    total += m_scores[i];
  }
  double avgScore = total / m_numOfCourses;
  return avgScore;
}

/* Prints the student name and number of Courses taken.
     It does not return anything. */
void StudentRecord::CheckProperties() {
  cout << "Student Name: " << *m_name <<endl;
  cout << "Number of courses taken: " << m_numOfCourses <<endl;
  
}
