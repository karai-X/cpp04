#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Brain: default Constructor called" << std::endl;
  std::stringstream ss;
  std::string str;
  for (int i = 0; i < 100; i++)
  {
    ss << i;
    str = ss.str();
    _ideas[0] = str;
  }
}

Brain::~Brain() {
  std::cout << "(Brain): Destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other) {
  for (int i = 0; i < 100; i++)
  {
	_ideas[i] = other._ideas[i];
  }
  std::cout << "Brain: Copy Constructor called" << std::endl;
  return (*this);
}

Brain::Brain(const Brain &other) {
  *this = other;
  std::cout << "Brain: Copy Constructor called" << std::endl;
}
