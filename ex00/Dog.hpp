#pragma once
#include "Animal.hpp"
#include <iostream>
#include <string>
class Dog : public Animal {
private:
public:
  Dog();
  Dog(std::string type);
  virtual ~Dog();
  Dog &operator=(const Dog &other);
  Dog(const Dog &other);
  virtual void makeSound() const;

protected:
};
