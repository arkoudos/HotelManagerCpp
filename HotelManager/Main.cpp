#include <stdio.h>
#include <iostream>
#include <Main.h>

using namespace std;
void printMenu();

int main()
{

	printMenu();
	readFile();

	system("PAUSE");
	return 0;
}

//creating the menu
 void printMenu()
{
	 cout << "   ------------------------------------------  " << endl;
	 cout << " |                   Options                  |" << endl;
	 cout << " | ------------------------------------------ |" << endl;
	 cout << " | 1. Load Hotels and Reservations from file  |" << endl;
	 cout << " | 2. Save hotels and Reservations to file    |" << endl;
	 cout << " | 3. Add a Hotel(With reservations           |" << endl;
	 cout << " | 4. Search and Display a Hotel by id        |" << endl;
	 cout << " | 5. Display Reservations by surname search  |" << endl;
	 cout << " | 6. Exit                                    |" << endl;
	 cout << " |                                            |" << endl;
	 cout << "  ------------------------------------------" << endl;
}