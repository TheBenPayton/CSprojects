//Class is stored here
/*
  (HEADER)
  THIS IS THE .h FILE SOURCE CODE
*/
#ifndef STUDENTRECS
#define STUDENTRECS
#include <string>
using namespace std;
//Test statement to make sure it is running in main code:
/*void sayHello()
{
    cout << "Reading from header." << endl;
}
*/
//Student class/records:
class Student
{
  private:

  public:
      double score;
      int id;
      string name;
      //Constructor for student:
      Student(){
        score = 0;
        id = 0;
        name = " ";
      }
      //Functions for assignment:
      void setName(string iname){
        name = iname;
      }
      void setID(int iid){
        id = iid;
      }
      void setScore(double iscore){
        score = iscore;
      }
      //Functions for retireving data from object:
      int getID() { return id; }
      double getScore() { return score; }
      string getName() { return name; }
};

#endif
