#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
  std::cout << "WrongAnimal: default Constructor called" << std::endl;
  _type = "Nanashi";
}

WrongAnimal::WrongAnimal(std::string type) {
  _type = type;
  std::cout << _type << "(WrongAnimal): string Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() { std::cout << _type << "(WrongAnimal): Destructor called" << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "WrongAnimal: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "WrongAnimal: Copy Constructor called" << std::endl;
  this->_type = other._type;
}

void WrongAnimal::makeSound() const{
	std::cout << _type << "(WrongAnimal) make sounds something" << std::endl;
}

std::string WrongAnimal::getType() const {
	return _type;
}
