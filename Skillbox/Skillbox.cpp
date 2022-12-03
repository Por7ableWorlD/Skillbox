#include <iostream>

//#define FirstTask
//#define FirstTaskBrief

void OutputEvenNumbersToLimit(int Limit, bool IsEven);

int main()
{
	const int N = 10;

#ifdef FirstTask
	std::cout << "Even numbers from 0 to " << N << std::endl;
	for (int i = 1; i < N; ++i)
	{
		if ((i % 2) == 0)
		{
			std::cout << i << " ";
		}
	}

	std::cout << std::endl;
#endif // FirstTask

#ifdef FirstTaskBrief
	std::cout << "Even numbers from 0 to " << N << std::endl;
	for (int i = 2; i < N; i+=2)
	{
		std::cout << i << " ";
	}

	std::cout << std::endl;
#endif // FirstTaskBrief

	std::cout << "Even numbers from 0 to " << N << std::endl;
	OutputEvenNumbersToLimit(N, true);

	std::cout << "\n\nOdd numbers from 0 to " << N << std::endl;
	OutputEvenNumbersToLimit(N, false);
	std::cout << std::endl;

	return 0;
}

void OutputEvenNumbersToLimit(int Limit, bool IsEven)
{
	if (IsEven)
	{
		for (int i = 2; i < Limit; i+=2)
		{
			std::cout << i << " ";
		}
	}
	else
	{
		for (int i = 1; i < Limit; i+=2)
		{
			std::cout << i << " ";
		}
	}
}
