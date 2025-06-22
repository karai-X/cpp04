#include "Animal.hpp"

Animal::Animal() {
  std::cout << "Animal: default Constructor called" << std::endl;
  _type = "Nanashi";
}

Animal::Animal(std::string type) {
  _type = type;
  std::cout << _type << "(Animal): string Constructor called" << std::endl;
}

Animal::~Animal() { std::cout << _type << "(Animal): Destructor called" << std::endl; }

Animal &Animal::operator=(const Animal &other) {
  std::cout << "Animal: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  return *this;
}

Animal::Animal(const Animal &other) {
  std::cout << "Animal: Copy Constructor called" << std::endl;
  this->_type = other._type;
}

void Animal::makeSound() const{
	std::cout << _type << "(Animal) make sounds something" << std::endl;
}

std::string Animal::getType() const {
	return _type;
}
