#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;
	}
	std::cout << std::endl;
	std::cout << "====check no leaks====" << std::endl;
	{
		int size = 10;
		Animal *animals[size];
		for (int i = 0; i < size / 2; i++)
		{
			animals[i] = new Dog();
		}
		for (int i = size / 2; i < size; i++)
		{
			animals[i] = new Cat();
		}
		for (int i = 0; i < size; i++)
		{
			delete animals[i];
		}
	}
	std::cout << std::endl;
	std::cout << "====check abstruct class====" << std::endl;
	{
		// Animal a; //Animal cannot be instantiated
	}
	return 0;
}
