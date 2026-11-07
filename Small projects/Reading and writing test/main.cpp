#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>

void clearTerminal(){system("cls");}

int main(int argc, const char *argv[])
{
	std::ofstream File(argv[1], std::ios::app);
	if(!File.is_open()){std::cerr << "File Not Found"; return 1;}
		int itr;
		std::cout << "How many inputs?: "; std::cin >> itr;
		while(itr != 0)
		{
			int numO, numT;
			std::cout << "Enter First Number: "; std::cin >> numO;
			std::cout << "\nEnter Second Number: "; std::cin >> numT;
			File << numO << " + " << numT << " = " << numO + numT << std::endl;
			itr--;
			clearTerminal();
		}
	File.close();

	std::ifstream Read(argv[1]);
		std::string sen;
		while(std::getline(Read, sen)){std::cout << sen << std::endl;}
	Read.close();
	
	return 0;
}
