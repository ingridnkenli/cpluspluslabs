#include "StudentRecord.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

  string studentName =  "Empty";
  cout << "Welcome to the Student Record program! " << endl
       << "Please enter the student's name: ";
  cin >> studentName;

  unsigned int numOfCourses = 0;
  cout << "How many scores would you like to average for " << studentName
       << "?" << endl;
  cin >> numOfCourses;
  
  // Create Student Record object
  StudentRecord sampleStudent(studentName, numOfCourses);
  
  // Calculate average score for student.
  double avg = sampleStudent.GetAverageScore();
  cout << "The average score is:: " << avg << endl << endl;
  
  // Display the scores of the student.
  int* scoreLocation = sampleStudent.GetScoreLocation();
  
  cout << "The first score value    is: " << *scoreLocation << endl;
  cout << "The first score location is: " <<  &scoreLocation[0] << endl << endl;

  // Display the Student's name and the number of courses taken
  sampleStudent.PrintScores();
  sampleStudent.CheckProperties();

  delete [] scoreLocation;
  scoreLocation = NULL;

  return 0;
}
