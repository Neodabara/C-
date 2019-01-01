/*
	Creator: Marcus Brock
	Class: CS-230
	Assignment: Project 1
	Professor: Daniel Packer
*/

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//super duper long cipher with switch statements... should use a different method
//next time.

string cipher(string original)
{
	string result = original;
	
	for (unsigned int a = 0; a < result.length(); ++a)
	{
		switch (result[a])
		{
			case 'a':
				result[a] = 'n';
				break;
				
			case 'b':
				result[a] = 'o';
				break;
				
			case 'c':
				result[a] = 'p';
				break;
				
			case 'd':
				result[a] = 'q';
				break;
			
			case 'e':
				result[a] = 'r';
				break;
				
			case 'f':
				result[a] = 's';
				break;
				
			case 'g':
				result[a] = 't';
				break;
			
			case 'h':
				result[a] = 'u';
				break;
				
			case 'i':
				result[a] = 'v';
				break;
				
			case 'j':
				result[a] = 'w';
				break;
				
			case 'k':
				result[a] = 'x';
				break;
				
			case 'l':
				result[a] = 'y';
				break;
				
			case 'm':
				result[a] = 'z';
				break;
			
			case 'n':
				result[a] = 'a';
				break;
				
			case 'o':
				result[a] = 'b';
				break;
				
			case 'p':
				result[a] = 'c';
				break;
				
			case 'q':
				result[a] = 'd';
				break;
				
			case 'r':
				result[a] = 'e';
				break;
				
			case 's':
				result[a] = 'f';
				break;
			
			case 't':
				result[a] = 'g';
				break;
				
			case 'u':
				result[a] = 'h';
				break;
				
			case 'v':
				result[a] = 'i';
				break;
				
			case 'w':
				result[a] = 'j';
				break;
				
			case 'x':
				result[a] = 'k';
				break;
				
			case 'y':
				result[a] = 'l';
				break;
			
			case 'z':
				result[a] = 'm';
				break;
		}
	}	
	return result;
}

int main(int argc, char** argv)
{
	string line;
	
	
	ifstream inFile;
	ofstream outFile;
	
	inFile.open("input.txt");
	outFile.open("output.txt");
	
	
	
	//For reading the regular file
	
	if (inFile.is_open())
	{
		while(getline(inFile,line))
		{
			cout << line << '\n';
		}
	}
	
	//The actual cipher bit & reading.
	

			cout << cipher(line);
			outFile << cipher(line);
			inFile.close();
		//}
		
	//closing the files when done
		

	outFile.close();
	

}
