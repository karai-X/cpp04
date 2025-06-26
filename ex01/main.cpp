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

	{
		std::cout << "\033[33m" << "From PDF array test\n"<< "\033[0m";
		Animal* animal_arr[5];

		int i = 0;
		while (i < 5)
		{
			if (i % 2 == 0)
				animal_arr[i] = new Dog();
			else
				animal_arr[i] = new Cat();
			i++;
		}

		std::cout << std::endl;

		i = 0;
		while ( i < 5)
		{
			std::cout << "This is a " << animal_arr[i]->getType() << std::endl;
			animal_arr[i]->makeSound();
			i++;
		}

		std::cout << std::endl;

		i = 0;
		while ( i < 5)
		{
			delete animal_arr[i];
			i++;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[33m" << "Deep Copy Test Cat Copy\n"<< "\033[0m";
		Cat cat;
		Cat copy_cat(cat);

		std::cout << std::endl;

		std::cout << "This is idea 10 from cat: " << cat.get_idea(10) << std::endl;
		cat.set_idea(10, "This is the new idea to paint the moon");
		std::cout << "This is the new idea 10 from cat: " << cat.get_idea(10) << std::endl;

		std::cout << "This is idea 10 from copy_cat: " << copy_cat.get_idea(10) << std::endl;

		std::cout << std::endl;
	}

	std::cout << std::endl;


	{
		std::cout << "\033[33m" << "Deep Copy Test Dog Assignment\n"<< "\033[0m";
		Dog dog;
		Dog assignment_dog(dog);
		std::cout << std::endl;

		std::cout << "This is idea 10 from dog: " << dog.get_idea(10) << std::endl;
		dog.set_idea(10, "This is the new idea to paint the moon");
		std::cout << "This is the new idea 10 from dog: " << dog.get_idea(10) << std::endl;
		std::cout << std::endl;

		std::cout << "This is idea 10 from assignment_dog before assignment: " << assignment_dog.get_idea(10) << std::endl;
		assignment_dog = dog;
		std::cout << "This is idea 10 from assignment_dog after assignment: " << assignment_dog.get_idea(10) << std::endl;
		std::cout << std::endl;

		assignment_dog.set_idea(10, "Better paint the mars!");
		std::cout << "This is the new idea 10 from assignment dog: " << assignment_dog.get_idea(10) << std::endl;
		std::cout << "This is idea 10 from dog: " << dog.get_idea(10) << std::endl;

		std::cout << std::endl;
	}

	return 0;
}
