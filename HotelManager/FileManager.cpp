#include <Main.h>
#include <FileManager.h>



using namespace std;


void readFile()
{
	long int numberOfHotels;

	ifstream readFile("modData.csv");
	int i;
	string line;
	string value;
	char * fileValues = nullptr;
	
	string testt[1000];

	//Count number of records on the first line of the file and convert it to integer
	getline(readFile, line, ';');
	numberOfHotels = stoi(line);
	

	//fileValues = (char*)malloc(numberOfHotels * numberOfHotels);

	//testing if it gets the correct number from the file
	//cout <<"Number of hotels: " << numberOfHotels <<endl;
	
	//reading each line
	//while (readFile.good())
	//{
	//	//getline(readFile, value,';');
	//	//cout << string(value)<<endl;
	//	//getline(readFile, line, ';');
	//	//testt[loop] = line;
	//	//loop++;
	//
	//}

	//read from file and stores values into an array skipping the first value
	getline(readFile, line);
	//readFile.ignore();
	for (i = 0; i < 1000; i++)
	{
		getline(readFile, line, ';');
		testt[i] =  line;
	}
	
	readFile.close();
}