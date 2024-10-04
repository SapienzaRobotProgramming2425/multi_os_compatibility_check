
#include "banana.h"
#include "bread.h"
#include "kitchen.h"

int main() {
  Kitchen kitchen;
  std::shared_ptr<Bread> bread = Bread::create();
  std::shared_ptr<Banana> banana = Banana::create();
  kitchen.getFridge().push_back(bread);
  kitchen.getFridge().push_back(banana);
  std::cout << "Kitchen's fridge contains:" << std::endl;
  for (auto const &food : kitchen.getFridge()) {
    std::cout << "\t" << food->getName() << std::endl;
  }
  return 0;
}