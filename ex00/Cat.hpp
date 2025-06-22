#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>
class Cat : public Animal {
private:
public:
  Cat();
  Cat(std::string type);
  virtual ~Cat();
  Cat &operator=(const Cat &other);
  Cat(const Cat &other);
  virtual void makeSound() const;

protected:
};
