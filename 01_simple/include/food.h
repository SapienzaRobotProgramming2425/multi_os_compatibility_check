#pragma once
#include <iostream>
#include <memory>

class Food {
 public:
  virtual std::string getName() const = 0;

 protected:
};