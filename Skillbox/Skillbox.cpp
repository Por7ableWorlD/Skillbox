#include <iostream>
#include <string>

int main()
{
	std::string line;

	std::cout << "Enter ur string: ";
	getline(std::cin, line);

	std::cout << "\n\nUr string: " << line << "\nLength = " << line.length() <<
		"\n\nFirst symbol: " << line.front() << "\nSecond symbol: " << line.back() << std::endl;


	return 0;
}
