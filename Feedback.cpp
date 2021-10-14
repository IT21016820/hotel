#include <iostream>
#include "Feedback.h"
#include <cstring>
using namespace std;

Feedback:: Feedback()
{
}
Feedback::Feedback(int fbNo,const char fdescription[50], const char cname[50])
{
  feedbackNo = fbNo;
  strcpy(feedbackdescription,fdescription);
  strcpy(customername=cname);
}

void Feedback:: displayFeedback()
{
}
Feedback::~Feedback()
{
  cout<< "Destructor running for Feedback class" << endl;
}