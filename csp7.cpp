/*
  Payton Long//CS2 Project 7
  Object Oriented Programming
  Reading From Files
  THIS IS THE C++ FILE SOURCE CODE
*/
#include <iostream>
#include <string>
#include <cstdlib>
#include "studentrecs.h"
using namespace std;

//Global Values:
const int numStudents = 15;
int ans;
int count = 0;

//Main Loop:
int main() {
  cout << "Welcome to Payton's DataBase!!" << endl;
  cout << "Would you like to read from Student Recs?(1=y, 0=n)" << endl;
  cin >> ans;
  if (ans == 1) {
    //sayHello();
    Student student[15];
    student[0].setName("Payton Long");
    student[0].setID(1001);
    student[0].setScore(75.5);
    student[1].setName("Lewis Hamilton");
    student[1].setID(1418);
    student[1].setScore(90.3);
    student[2].setName("Pastor Maldonado");
    student[2].setID(2213);
    student[2].setScore(55.7);
    student[3].setName("Maci Teague");
    student[3].setID(2541);
    student[3].setScore(83.0);
    student[4].setName("Tyson Kelley");
    student[4].setID(2817);
    student[4].setScore(43.8);
    student[5].setName("Layton Faulkner");
    student[5].setID(3091);
    student[5].setScore(98.6);
    student[6].setName("Valtteri Bottas");
    student[6].setID(3055);
    student[6].setScore(55.5);
    student[7].setName("Charles Leclerc");
    student[7].setID(3910);
    student[7].setScore(77.2);
    student[8].setName("Michael Schumacher");
    student[8].setID(4012);
    student[8].setScore(90.5);
    student[9].setName("Robert Jackson");
    student[9].setID(4501);
    student[9].setScore(64.8);
    student[10].setName("Ryan Stewart");
    student[10].setID(5517);
    student[10].setScore(89.0);
    student[12].setName("John Red");
    student[12].setID(7792);
    student[12].setScore(52.5);
    student[13].setName("Jaxson Smith");
    student[13].setID(8121);
    student[13].setScore(50.8);
    student[14].setName("Jake Milian");
    student[14].setID(8545);
    student[14].setScore(78.4);
    //Outputting student names, scores, id#'s:
    for (int i = 0; i < 15; i++) {
      cout << "Name: " << student[i].name << " ID: " << student[i].id <<
      " Score: " << student[i].score << "%." << endl;
    }
    //Calcualte average
    double totalScore =
        student[0].getScore() + student[1].getScore() +
        student[2].getScore() + student[3].getScore() +
        student[4].getScore() + student[5].getScore() +
        student[6].getScore() + student[7].getScore() +
        student[8].getScore() + student[9].getScore() +
        student[10].getScore() + student[11].getScore() +
        student[12].getScore() + student[13].getScore() +
        student[14].getScore();
    double averageScore = totalScore / 15;
    cout << "Class average score is: " << averageScore << "%." << endl;
  } else {
    cout << "Logging Off.." << endl;
  }
}
