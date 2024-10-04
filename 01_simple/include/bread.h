#pragma once

#include "food.h"

class Bread : public Food {
 public:
  static std::shared_ptr<Bread> create() { return std::make_shared<Bread>(); }
  std::string getName() const override { return "Bread"; }

 protected:
};
