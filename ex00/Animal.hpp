#pragma once
#include <iostream>
#include <string>
class Animal {
private:
public:
  Animal();
  Animal(std::string type);
  virtual ~Animal();
  Animal &operator=(const Animal &other);
  Animal(const Animal &other);
  virtual void makeSound() const;
  std::string getType() const;

protected:
  std::string _type;
};
