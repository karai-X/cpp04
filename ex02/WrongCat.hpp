#pragma once
#include "WrongAnimal.hpp"
#include <iostream>
#include <string>
class WrongCat : public WrongAnimal {
private:
public:
  WrongCat();
  WrongCat(std::string type);
  virtual ~WrongCat();
  WrongCat &operator=(const WrongCat &other);
  WrongCat(const WrongCat &other);
  virtual void makeSound() const;

protected:
};
