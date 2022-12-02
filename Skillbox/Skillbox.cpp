#include <iostream>
#include <string>

int main()
{
	std::string line;

	std::cout << "Enter ur string: ";
	getline(std::cin, line);

	std::cout << "\n\nUr string: " << line << "\nLength = " << line.length() <<
		"\n\nFirst symbol: " << line[0] << "\nSecond symbol: " << line[line.length() - 1] << std::endl;


	return 0;
}
