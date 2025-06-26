#pragma once
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
class Cat : public Animal {
private:
	Brain *_brain;
public:
  Cat();
  Cat(std::string type);
  virtual ~Cat();
  Cat &operator=(const Cat &other);
  Cat(const Cat &other);
  virtual void makeSound() const;
  std::string get_idea(int idx);
  void set_idea(int idx, std::string str);
  protected:
};
