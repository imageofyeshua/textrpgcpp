#include "cleric.h"
#include "rogue.h"
#include "warrior.h"
#include "wizard.h"
#include <iostream>

int main() {
  Cleric cler1;
  /*Warrior warr1;*/
  /*Wizard wiz1;*/
  /*Rogue rog1;*/

  for (int i = 0; i < 3; i++) {
    std::cout << "Cleric Level " << cler1.getLevel() << "\n"
              << "-EXP: " << cler1.getCurrentEXP() << "/"
              << cler1.getEXPToNextLevel() << "\n"
              << "-Strength: " << cler1.getStrength() << "\n"
              << "-Intellect: " << cler1.getIntellect() << "\n";
    if (i < 2)
      cler1.gainEXP(100u);
  }

  /*std::cout << "===========================================\n";*/
  /*std::cout << "Warrior\n"*/
  /*          << "-MaxHP: " << warr1.getMaxHP() << "\n"*/
  /*          << "-Strength: " << warr1.getStrength() << "\n"*/
  /*          << "-Intellect: " << warr1.getIntellect() << "\n";*/
  /*std::cout << "===========================================\n";*/
  /*std::cout << "Wizard\n"*/
  /*          << "-MaxHP: " << wiz1.getMaxHP() << "\n"*/
  /*          << "-Strength: " << wiz1.getStrength() << "\n"*/
  /*          << "-Intellect: " << wiz1.getIntellect() << "\n";*/
  /*std::cout << "===========================================\n";*/
  /*std::cout << "Cleric\n"*/
  /*          << "-MaxHP: " << cler1.getMaxHP() << "\n"*/
  /*          << "-Strength: " << cler1.getStrength() << "\n"*/
  /*          << "-Intellect: " << cler1.getIntellect() << "\n";*/
  /*std::cout << "===========================================\n";*/
  /*std::cout << "Rogue\n"*/
  /*          << "-MaxHP: " << rog1.getMaxHP() << "\n"*/
  /*          << "-Strength: " << rog1.getStrength() << "\n"*/
  /*          << "-Intellect: " << rog1.getIntellect() << "\n";*/
  /*std::cout << "===========================================\n";*/
  return 0;
}
