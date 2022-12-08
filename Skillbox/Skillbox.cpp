#include <iostream>

class Animal
{
public:
	virtual void Voice()
	{
		std::cout << "*Voice of animal*\n";
	}
};

class Dog : public Animal
{
	void Voice() override
	{
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal
{
	void Voice() override
	{
		std::cout << "Meow!\n";
	}
};

class Duck : public Animal
{
	void Voice() override
	{
		std::cout << "Quack-quack!\n";
	}
};

int main() 
{
	Animal a = Dog();
	Animal* animals[] { new Dog(), new Cat(), new Duck()};

	for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
	{
		animals[i]->Voice();
	}

	return 0;
}