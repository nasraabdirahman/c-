#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generate_num(int max)
{
    return rand() % max + 1;
}



bool check(int input, int comp_guess)
{
    if(input == comp_guess)
    {
        cout << "Correct guess!\n";
        return true;
    }
    else 
    {
        cout << "Incorrect guess\n";
        return false;
    }
}

int prize(int difficulty)
{
    if(difficulty == 1) 
    {
        return 10;
    }
    if(difficulty == 2)
    {
        return 20;
    }
    if (difficulty == 3)
    {
        return 50;
    }
}

int main()
{
    srand(time(NULL));

    int difficulty;
    int max_range;
    int input;
    cout << "Choose difficulty: 1 = easy, 2 = medium, 3 = hard" << endl;

    cin >> difficulty;

    if(difficulty == 1)
    {
        max_range = 10;
    }
    else if (difficulty == 2)
    {
        max_range = 100;
    }
    else if(difficulty == 3)
    {
        max_range = 1000;
    }

    int comp_guess = generate_num(max_range);

    int user;

    cout << "Enter your number\n" ;
    cin >> user;


    cout << "Computer guess is " << comp_guess << endl;
    cout << "User guess is " << user << endl;

    check(user, comp_guess);

}
