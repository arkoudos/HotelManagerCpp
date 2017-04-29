#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <malloc.h>

#include <FileManager.h>

using namespace std;

void readFile()
{
	long int numberOfHotels;

	ifstream readFile("modData.csv");

	string line;
	string value;
	//char *buffer = nullptr;

	//Count number of records on the first line of the file and convert it to integer
	getline(readFile, value, ';');

	numberOfHotels = stoi(value);
	
	//testing if it gets the correct number from the file
	//cout <<"Number of hotels: " << numberOfHotels <<endl;
	
	//reading each line
	while (readFile.good())
	{
		
		getline(readFile, value,';');
		//cout << string(value)<<endl;
		
	}

		
	
	readFile.close();
}