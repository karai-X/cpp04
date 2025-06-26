#include "Cat.hpp"

Cat::Cat() {
  std::cout << "Cat: default Constructor called" << std::endl;
  _type = "Nanashi";
}

Cat::Cat(std::string type) {
  _type = type;
  std::cout << _type << "(Cat): string Constructor called" << std::endl;
}

Cat::~Cat() { std::cout << _type << "(Cat): Destructor called" << std::endl; }

Cat &Cat::operator=(const Cat &other) {
  std::cout << "Cat: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  return *this;
}

Cat::Cat(const Cat &other) : Animal(other) {
  std::cout << "Cat: Copy Constructor called" << std::endl;
  *this = other;
  this->_type = other._type;
}

void Cat::makeSound() const {
  std::cout << _type << "(Cat) make sounds meow" << std::endl;
}
