// Ghazanfar Ghaffar 22i-2079 pf sec b final project
// Game of life

// including libraries
#include <iostream> //for input/output
using namespace std;

// Declaring functions' prototypes
void welcome();
void Info();
int main()
{
    welcome();
    return EXIT_SUCCESS;
}

/*==============================================================================*/
/*Prints a welcome message for the Game of Life program and starts the game heh.*/
void welcome()
{
   cout << "Do you want to start the game? (Y/N): ";
    char choice; // variable for user's choice
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Starting the game..." << endl;
        cout << endl;
        system("clear");
        Info(); // start the game
    }
    else
    {
        cout << "Exiting the game..." << endl;
        return;
    }

    cout << "==================================" << endl;
    cout << "|      Thanks for playing :)     |" << endl;
    cout << "==================================" << endl;
}
void Info()
{
    int numberOfGenerations(0);
    int numberOfCells(0);
    cout << "Enter the following information:" << endl;
    cout << "Enter the number of generations you want to run: ";
    cin >> numberOfGenerations;

    cout << "Do you want to write out the alive cells or "
         << "do you want to select from one of the templates? "
         << "\n(Type 'W' or 'T' respectively): " << endl;
    char choice; // variable for user's choice
    cin >> choice;
    // input validation
    while (choice != 'W' && choice != 'w' && choice != 'T' && choice != 't')
    {
        cout << "Invalid choice. Please try again.\n(Type 'W' or 'T' respectively):" << endl;
        cin >> choice;
    }

    if (choice == 'W' || choice == 'w')
    {
        cout << "Enter the number of cells alive: ";
        cin >> numberOfCells;
        // input validation
        while (numberOfCells < 0 || numberOfCells > 400)
        {
            cout << "Invalid number. Please try again." << endl;
            cout << "Enter the number of cells alive: ";
            cin >> numberOfCells;
        }
    }
    else
    {
        cout << "Following are some of the templates." << endl;
        cout << "\n1. Glider" << endl;
        cout << "2. Cross" << endl;
        cout<< "3. Dot"<<endl;
    }
}
/*===================================THE END===================================*/
