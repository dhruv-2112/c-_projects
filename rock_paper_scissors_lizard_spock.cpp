#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
  while (3>2) {
    srand(time(NULL));
    int com = rand()%5;
    string choice_c;
    string choice_u;
    cout << "PLEASE ENTER rock,paper,scissors,lizard or Spock (Spock has to be capital all others r small) \n";
    cin >> choice_u;
    switch (com)
    {
      case 0 :
        choice_c = "rock";
        cout << "computer chose \n" << choice_c << " \n";
        if (choice_u == "rock")
        {
          cout << "ITS A TIE\n";
        }
        else if (choice_u == "paper")
        {
          cout << "SHELDON SAYS, PAPER COVERS ROCK, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "scissors")
        {
          cout << "SHELDON SAYS, ROCK CRUSHES SCISSORS (AS IT ALWAYS HAS...), HENCE, YOU LOSE...\n";
        }
        else if (choice_u == "lizard")
        {
          cout << "SHELDON SAYS, ROCK CRUSHES LIZARD, HENCE, YOU LOSE...\n";
        }
        else if (choice_u == "Spock")
        {
          cout << "SHELDON SAYS, SPOCK VAPORIZES ROCK, HENCE, YOU WIN!!!\n";
        }
        else
        {
          cout << "invalid";
        }
        break;
      case 1 :
        choice_c = "paper";
        cout << "computer chose \n" << choice_c << " \n";
        if (choice_u == "rock")
        {
          cout << "SHELDON SAYS, PAPER COVERS ROCK, HENCE, YOU LOSE...\n";
        }
        else if (choice_u == "paper")
        {
          cout << "ITS A TIE!\n";
        }
        else if (choice_u == "scissors")
        {
          cout << "SHELDON SAYS, SCISSORS CUT PAPER, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "lizard")
        {
          cout << "SHELDON SAYS, LIZARD EATS PAPER, HENCE, YOU WIN!!!\n";
        }
        else if (choice_u == "Spock")
        {
          cout << "SHELDON SAYS, PAPER DISPROVES SPOCK, HENCE, YOU LOSE...\n";
        }
        else
        {
          cout << "invalid" << endl;
        }
        break;
      case 2 :
        choice_c = "scissors";
        cout << "computer chose \n" << choice_c << " \n";
        if (choice_u == "rock")
        {
          cout << "SHELDON SAYS, ROCK CRUSHES SCISSORS, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "paper")
        {
          cout << "SHELDON SAYS, SCISSORS CUT PAPER, HENCE, U LOSE...\n";
        }
        else if (choice_u == "scissors")
        {
          cout << "ITS A TIE!\n";
        }
        else if (choice_u == "lizard")
        {
          cout << "SHELDON SAYS, SCISSORS DECAPITATE LIZARD, HENCE, U LOSE...\n";
        }
        else if (choice_u == "Spock")
        {
          cout << "SHELDON SAYS, SPOCK SMASHES SCISSORS, HENCE, U WIN!!!\n";
        }
        break;
      case 3 :
        choice_c = "lizard";
        cout << "computer chose \n" << choice_c << " \n";
        if (choice_u == "rock")
        {
          cout << "SHELDON SAYS, ROCK CRUSHES LIZARD, HENCE, U WIN!\n";
        }
        else if (choice_u == "paper")
        {
          cout << "SHELDON SAYS, LIZARD EATS PAPER, HENCE, U LOSE...\n";
        }
        else if (choice_u == "scissors")
        {
          cout << "SHELDON SAYS, SCISSORS DECAPITATE LIZARD, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "lizard")
        {
          cout << "ITS A TIE!\n";
        }
        else if (choice_u == "Spock")
        {
          cout << "SHELDON SAYS, LIZARD POISONS SPOCK, HENCE, U LOSE...\n";
        }
        break;
      case 4 :
        choice_c = "Spock";
        cout << "computer chose \n" << choice_c << " \n";
        if (choice_u == "rock")
        {
          cout << "SHELDON SAYS, SPOCK VAPORIZES ROCK, HENCE U LOSE...\n";
        }
        else if (choice_u == "paper")
        {
          cout << "SHELDON SAYS, PAPER DISPROVES SPOCK, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "scissors")
        {
          cout << "SHELDON SAYS, SPOCK SMASHES SCISSORS, HENCE, U LOSE...\n";
        }
        else if (choice_u == "lizard")
        {
          cout << "SHELDON SAYS, LIZARD POISONS SPOCK, HENCE, U WIN!!!\n";
        }
        else if (choice_u == "Spock")
        {
          cout << "ITS A TIE!\n";
        }
        break;
      default :
        cout << "???\n";
        break;
    }
  }
}
