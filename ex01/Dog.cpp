#include "Dog.hpp"

Dog::Dog() {
  std::cout << "Dog: default Constructor called" << std::endl;
  _type = "Nanashi";
  _brain = new Brain();
}

Dog::Dog(std::string type) {
  _type = type;
  std::cout << _type << "(Dog): string Constructor called" << std::endl;
  _brain = new Brain();
}

Dog::~Dog() { std::cout << _type << "(Dog): Destructor called" << std::endl; }

Dog &Dog::operator=(const Dog &other) {
  std::cout << "Dog: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  delete this->_brain;
  this->_brain = new Brain(*(other._brain));
  return *this;
}

Dog::Dog(const Dog &other) : Animal(other) {
  std::cout << "Dog: Copy Constructor called" << std::endl;
  this->_type = other._type;
  *this = other;
}

void Dog::makeSound() const {
  std::cout << _type << "(Dog) make sounds bow-wow" << std::endl;
}

std::string Dog::get_idea(int idx) {
  if (idx < 0 || idx > 99)
  	return ("idx is out of range.");
  return (_brain->_ideas[idx]);
}

void Dog::set_idea(int idx, std::string str) {
  if (idx < 0 || idx > 99)
    std::cout << "idx is out of range." << std::endl;
  else {
    this->_brain->_ideas[idx] = str;
  }
}
