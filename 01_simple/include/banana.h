#pragma once

#include "food.h"

class Banana : public Food {
 public:
  static std::shared_ptr<Banana> create() { return std::make_shared<Banana>(); }
  std::string getName() const override { return "Banana"; }

 protected:
};