#include "WrongCat.hpp"

WrongCat::WrongCat() {
  std::cout << "WrongCat: default Constructor called" << std::endl;
  _type = "Nanashi";
}

WrongCat::WrongCat(std::string type) {
  _type = type;
  std::cout << _type << "(WrongCat): string Constructor called" << std::endl;
}

WrongCat::~WrongCat() { std::cout << _type << "(WrongCat): Destructor called" << std::endl; }

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << "WrongCat: Copy Assignment Operator called" << std::endl;
  this->_type = other._type;
  return *this;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other) {
  std::cout << "WrongCat: Copy Constructor called" << std::endl;
  this->_type = other._type;
}

void WrongCat::makeSound() const {
  std::cout << _type << "(WrongCat) make sounds ribbit" << std::endl;
}
