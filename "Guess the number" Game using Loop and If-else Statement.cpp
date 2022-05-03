#include<iostream>
using namespace std;

int main ()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outofGuesses = false;

    while(secretNum != guess && !outofGuesses ){
        if(guessCount < guessLimit)
        {
        cout<<"Enter guess : ";
        cin>>guess;
        guessCount++;
        }
        else {
            outofGuesses = true ;
        }
    }
    if (outofGuesses)
    {
        cout<<"You Lose!";
    }
    else {
     cout<<"You Win!";
    }
    
    return 0;
}
