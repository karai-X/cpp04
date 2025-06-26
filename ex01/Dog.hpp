#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Dog : public Animal {
private:
	Brain *_brain;
public:
  Dog();
  Dog(std::string type);
  virtual ~Dog();
  Dog &operator=(const Dog &other);
  Dog(const Dog &other);
  virtual void makeSound() const;
  std::string get_idea(int idx);
  void set_idea(int idx, std::string str);
protected:
};
