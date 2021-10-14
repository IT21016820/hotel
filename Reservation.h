#include <iostream>
using namespace std;

class Reservation {
private:
  int reservationID;
  int date;
  Customer *customers;
  Payment *payments;
  hall *hall[size];

public:
  Reservation();
  Reservation(int rdate);
  void displayReservationDetais();
  void addhalldtails()
  {
    addhalldtails[0] = newhalldetail();
    addhalldtails[1]= newhalldetail();
  }


};