#pragma once
#include <iostream>
#include <string>
class WrongAnimal {
private:
public:
  WrongAnimal();
  WrongAnimal(std::string type);
  virtual ~WrongAnimal();
  WrongAnimal &operator=(const WrongAnimal &other);
  WrongAnimal(const WrongAnimal &other);
  virtual void makeSound() const;
  std::string getType() const;

protected:
  std::string _type;
};
