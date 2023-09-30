#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
 
int main()
{
 
    cout << "\n\t\t\tWelcome to GuessTheNumber game!"
         << endl;
    cout << "You have to guess a number between 1 and 10. "
            "You'll have limited choices based on the "
            "level you choose. Good Luck!"
         << endl;
 
    while (true) {
        srand(time(0));
        int secretNumber = 1 + (rand() % 10);
     

             int guessleft=5;
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
                        cout<<"\nGuess number is to high";
                        }
                    else{
                    cout<<"\nGuess number is to low";
                        } 
                guessleft--;
            }
            break;
        

    }
return 0;
}