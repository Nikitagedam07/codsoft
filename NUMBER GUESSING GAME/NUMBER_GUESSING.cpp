#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 
int main()
{
    system("cls");
	system("Color 0A");

    cout << "\n\t\t\tWelcome to GuessTheNumber game!"
         << endl;
    cout << "\nYou have to guess a number between 1 and 10. "
            "\nYou'll have limited choices based on the "
            "\nlevel you choose. Good Luck!"
         << endl;
 
    while (true) {
        srand(time(0));
        int secretNumber = 1 + (rand() % 10);
     

             int guessleft=6;
            for(int i=0;i<=guessleft;i++)
            {
                int guess=0;
                    cout << "\nEnter the number: ";
                    cin>>guess;
                    if(secretNumber==guess){
                         cout<<"\nyour GUESS is correct\n you win the game";
                        break;
                        }
                   
                    else if(secretNumber<guess)
                        {
                        cout<<"\nGuess number is too high";
                        }
                    else{
                    cout<<"\nGuess number is too low";
                        } 
                guessleft--;
            }
            break;
        

    }
return 0;
}