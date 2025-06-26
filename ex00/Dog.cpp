#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog: default Constructor called" << std::endl;
  _type = "Nanashi";
}

Dog::Dog(std::string type) {
  _type = type;
  std::cout << _type << "(Dog): string Constructor called" << std::endl;
}

Dog::~Dog() { std::cout << _type << "(Dog): Destructor called" << std::endl; }

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  return *this;
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog: Copy Constructor called" << std::endl;
  *this = other;
  this->_type = other._type;
}

void Dog::makeSound() const {
  std::cout << _type << "(Dog) make sounds bow-wow" << std::endl;
}
