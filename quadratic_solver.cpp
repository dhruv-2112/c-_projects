#include <iostream>
#include <cmath>
#include <complex>
using namespace std;
double a;
double b;
double c;
double dis;
double x1;
double x2;
string ch;

int main() {
  const   complex<double> i(0.0,1.0);
  while (true) {
    cout << "QUDARATIC EQUATION SOLVER" << endl;
    cout << "FORM: ax^2 + bx + c = 0" << endl;
    cout << "ENTER a : " << endl;
    cin >> a;
    cout << "ENTER b : "<< endl ;
    cin >> b;
    cout << "ENTER c : "<< endl;
    cin >> c;
    dis = b*b - 4*a*c;
    if (dis > 0) {
      cout << "EXPRESSION HAS REAL ROOTS" << endl;
      x1 = -b + sqrt(dis);
      x2 = -b - sqrt(dis);
      cout << "ROOTS ARE: " << x1 << " AND " << x2 << endl;

    }
    else if (dis == 0) {
      cout << "EXPRESSION HAS REAL AND EQUAL ROOTS" << endl;
      x1 = -b + sqrt(dis);
      x2 = -b - sqrt(dis);
      cout << "ROOTS ARE: " << x1 << " AND " << x2 << " (EQUAL ROOTS)" << endl;
      cout << "THANKS FOR USING MY PROGRAM; HOPE I CAN HELP U AGAIN SOMETIME! " << endl;
    }
    else if (dis < 0) {
      cout << "EXPRESSION HAS COMPLEX ROOTS, DO U STILL CARE ABOUT THEM (y/n) ?" << endl;
      x1 = -b + sqrt(dis);
      x2 = -b - sqrt(dis);
      cin >> ch;
      if (ch == "y") {
      cout <<   "ok then..." << endl;
      cout << "ROOTS ARE: " << x1 << " AND " << x2 << endl;
      cout << "THANKS FOR USING MY PROGRAM; HOPE I CAN HELP U AGAIN SOMETIME! " << endl;
      }
      else if (ch == "n") {
        cout << "AHA ! COMPLEX NUMBERS SCARE U, HUH?" << endl;
        cout << "THANKS FOR USING MY PROGRAM; HOPE I CAN HELP U AGAIN SOMETIME! " << endl;
      }
    }
    cout << "\n";    cout << "\n";
    cout << "\n";
  }
  return 0;
}
