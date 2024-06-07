#include<bits/stdc++.h>
#include<ctime>
using namespace std;
int main()
{
    srand(time(nullptr));

    int randomNo;
    randomNo=rand()%101;

    int guess;
    int clue=1;
    do{
        switch(clue)
        {
        case 1:
            randomNo%2==0 ? cout<<"Clue 1: Multiple of 2\n":cout<<"Clue 1: Not a Multiple of 2\n";
            clue++;
            break;
        case 2:
            randomNo%3==0 ? cout<<"Clue 1: Multiple of 3\n":cout<<"Clue 1: Not a Multiple of 3\n";
            clue++;
            break;
        case 3:
            randomNo%5==0 ? cout<<"Clue 1: Multiple of 5\n":cout<<"Clue 1: Not a Multiple of 5\n";
            clue++;
            break;
        case 4:
            randomNo%7==0 ? cout<<"Clue 1: Multiple of 7\n":cout<<"Clue 1: Not a Multiple of 7\n";
            clue++;
            break;
        case 5:
            randomNo%10==0 ? cout<<"Clue 1: Multiple of 10\n":cout<<"Clue 1: Not a Multiple of 10\n";
            clue++;
            break;
        default:
            cout<<"Too more Clues given!\n";

        }
        cout<<"\nGuess Number Between 1 - 100 : ";
        cin>>guess;

        if(guess>randomNo)
            cout<<"Guess was Too High!\n";
        else if(guess<randomNo)
            cout<<"Guess was Too Low!\n";
        else
            cout<<"Congratulations! Your Guess is Correct!\n";

    }while(guess!=randomNo);

    return 0;
}
