#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat: default Constructor called" << std::endl;
  _type = "Nanashi";
  _brain = new Brain();
}

Cat::Cat(std::string type) {
  _type = type;
  std::cout << _type << "(Cat): string Constructor called" << std::endl;
  _brain = new Brain();
}

Cat::~Cat() {
	std::cout << _type << "(Cat): Destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  delete this->_brain;
  this->_brain = new Brain(*(other._brain));
  return *this;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat: Copy Constructor called" << std::endl;
  this->_brain = new Brain(*other._brain);
  this->_type = other._type;
}

void Cat::makeSound() const {
  std::cout << _type << "(Cat) make sounds meow" << std::endl;
}

std::string Cat::get_idea(int idx){
  if (idx < 0 || idx > 99)
    return ("idx is out of range.");
  return (_brain->_ideas[idx]);
}

void Cat::set_idea(int idx, std::string str) {
  if (idx < 0 || idx > 99)
    std::cout << "idx is out of range." << std::endl;
  else
  {
	this->_brain->_ideas[idx] = str;
  }
}
