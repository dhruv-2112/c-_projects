#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
  string user;
  cout << "PLEASE ENTER YOUR QUESTION : \n";
  cin >> user;
  srand(time(NULL));
  int com = rand() % 20;
  switch (com)
  {
    case 0 :
      cout << "It is certain.\n";
      break;
    case 1 :
      cout << "Reply hazy, try again.\n";
      break;
    case 2 :
      cout << "Don't count on it.\n";
      break;
    case 3 :
      cout << "Signs point to yes.\n";
      break;
    case 4 :
      cout << "It is decidedly so.\n";
      break;
    case 5 :
      cout << "Ask again later.\n";
      break;
    case 6 :
      cout << "Yes.\n";
      break;
    case 7 :
      cout << "My reply is no.\n";
      break;
    case 8 :
      cout << "Most likely.\n";
      break;
    case 9 :
      cout << "Without a doubt.\n";
      break;
    case 10 :
      cout << "Better not tell you now.\n";
      break;
    case 11 :
      cout << "Outlook good.\n";
      break;
    case 12 :
      cout << "My sources say no.\n";
      break;
    case 13 :
      cout << "As I see it, yes.\n";
      break;
    case 14 :
      cout << "Yes - definitely.\n";
      break;
    case 15 :
      cout << "Cannot predict now.\n";
      break;
    case 16 :
      cout << "Concentrate and ask again.\n";
      break;
    case 17 :
      cout << "Outlook not so good.\n";
      break;
    case 18 :
      cout << "Very doubtful.\n";
      break;
    case 19 :
      cout << "You may rely on it.\n";
      break;
    default :
        cout << "You suck.\n";
  }
}
