#pragma once
#include <vector>

#include "food.h"
class Kitchen {
 public:
  inline const auto& getFridge() const { return fridge; }
  inline auto& getFridge() { return fridge; }

 protected:
  std::vector<std::shared_ptr<Food>> fridge;
};