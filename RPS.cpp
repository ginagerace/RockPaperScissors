#include <iostream>    // For cin and cout
#include <cstdlib>
#include <iomanip>     // For formatted output using setw()
using namespace std;

int main()
{
	int num;
	char check;

	while (check != 'X')
	{
	    //user picks
		cout << "Enter R for rock, P for paper, S for scissors: ";
		cin >> check;
		cout << endl;
		check = toupper(check);
		if(check=='R'){
			cout << "You picked rock"<< endl;
		}
		else if(check=='P'){
			cout << "You picked paper"<< endl;
		}
		else if(check=='S'){
			cout << "You picked scissors"<< endl;
		}
		else {
            cout << "Invalid choice. Try again." << endl << endl;
            continue;
		}

		//computer picks
		num = (rand()%3);
		int result;
		if (num == 0) {
			cout << "Computer picked paper"<< endl;
			if(check=='P')
                result = 0;
            else if(check=='R')
                result = -1;
            else
                result = 1;
		}
		else if (num == 1) {
			cout << "Computer picked scissors" << endl;
			if(check=='P')
                result = -1;
            else if(check=='R')
                result = 1;
            else
                result = 0;
		}
		else if (num == 2) {
			cout << "Computer picked rock" << endl;
			if(check=='P')
                result = 1;
            else if(check=='R')
                result = 0;
            else
                result = -1;
		}

		//display result
		if(result == 0)
            cout << "It's a tie!" << endl << endl;
        else if (result == 1)
            cout << "You win!" << endl << endl;
        else
            cout << "You lose!" << endl << endl;

        cout << endl;
	}

	return 0;
}
