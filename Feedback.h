#include <iostream>
using namespace std;

class Feedback{
private:
  int feedbackNo;
  char feedbackdescription[50];
  char customername[50];



public:
  Feedback();
  Feedback(int fbNo,const char fdescription[50], const char cname[50]);
  void displayFeedback();
  ~Feedback();


};