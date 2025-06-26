#pragma once
#include <iostream>
#include <sstream>
#include <string>
class Brain {
private:
public:
  Brain();
  ~Brain();
  Brain &operator=(const Brain &other);
  Brain(const Brain &other);
  std::string _ideas[100];
};
