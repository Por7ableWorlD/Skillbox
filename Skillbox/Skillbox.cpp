#include <iostream>

class Character
{
private:
	std::string Name = "*Blank*";
	int Points = 0;

public:

	void SetCharacter(std::string CharacterName, int CharacterPoints)
	{
		Name = CharacterName;
		Points = CharacterPoints;
	}

	std::string GetName()
	{
		return Name;
	}

	void ChangeName(std::string NewCharacterName)
	{
		Name = NewCharacterName;
	}

	int GetPoints()
	{
		return Points;
	}

	void ChangePoints(int NewCharacterPoints)
	{
		Points = NewCharacterPoints;
	}

	void OutputCharacterInfo()
	{
		std::cout << "Name: " << Name << ", Points = " << Points << std::endl;
	}

};

void AscendingOrderSort(Character* Array, int ArrayLength);

int main()
{
	int CharacterAmount = 0;
	std::cout << "How many characters do u want to create: ";
	std::cin >> CharacterAmount;

	Character* CharactersList = new Character[CharacterAmount];

	std::string TemporaryCharacterName;
	int TemporaryCharacterPoints;

	std::cout << "\nEnter " << CharacterAmount << " characters:";
	for (int i = 0; i < CharacterAmount; i++)
	{
		std::cout << "\n\t" << i + 1 << "-st character:\n\t\tName: ";
		std::cin >> TemporaryCharacterName;

		std::cout << "\t\tPoints = ";
		std::cin >> TemporaryCharacterPoints;

		CharactersList[i].SetCharacter(TemporaryCharacterName, TemporaryCharacterPoints);
	}

	std::cout << "\nCharacters before sort:\n";
	for (int i = 0; i < CharacterAmount; i++)
	{
		std::cout << "\t" << i + 1 << "-st character: ";
		CharactersList[i].OutputCharacterInfo();
	}

	AscendingOrderSort(CharactersList, CharacterAmount);

	std::cout << "\nCharacters after sort:\n";
	for (int i = 0; i < CharacterAmount; i++)
	{
		std::cout << "\t" << i + 1 << "-st character: ";
		CharactersList[i].OutputCharacterInfo();
	}

	return 0;
}

void AscendingOrderSort(Character* Array, int ArrayLength)
{
	Character Temporary;
	for (int i = 0; i < ArrayLength; i++) 
	{
		for (int j = (ArrayLength - 1); j >= (i + 1); j--) 
		{
			if (Array[j].GetPoints() < Array[j - 1].GetPoints()) 
			{
				Temporary = Array[j];
				Array[j] = Array[j - 1];
				Array[j - 1] = Temporary;
			}
		}
	}
}
