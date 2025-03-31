#include "cleric.h"
#include "rogue.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream>

int main() {
  Warrior warr1;
  Wizard wiz1;
  Cleric cler1;
  Rogue rog1;

  std::cout << "Warrior\n"
            << "-MaxHP: " << warr1.getMaxHP() << "\n"
            << "-Strength: " << warr1.getStrength() << "\n"
            << "-Intellect: " << warr1.getIntellect() << "\n";

  return 0;
}
