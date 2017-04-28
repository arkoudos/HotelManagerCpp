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

	//Count number of records on the first line of the file
	getline(readFile, value, ';');

	numberOfHotels = stoi(value);
	

	cout <<"Number of hotels: " << numberOfHotels <<endl;
	while (readFile.good())
	{
		
		getline(readFile, value,';');
		//cout << string(value)<<endl;
		
	}

		
	
	readFile.close();
}