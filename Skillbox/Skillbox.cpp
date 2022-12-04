#include <iostream>
#include <ctime>

int main()
{
	const int N = 5;
	int Arr[N][N]{};

	time_t EpochStartSecondsAmount = time(NULL);

	tm CurrentDateTime;
	localtime_s(&CurrentDateTime, &EpochStartSecondsAmount);

	int SumLineElements = 0;
	int Line = CurrentDateTime.tm_mday % 5;

	std::cout << "Array:\n";
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			Arr[i][j] = i + j;

			if (i == Line)
			{
				SumLineElements += Arr[i][j];
			}

			std::cout << Arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << "\nSum elements of " << Line << "(index) row = " << SumLineElements << std::endl;

	return 0;
}
