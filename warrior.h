#ifndef WARRIOR_H
#define WARRIOR_H
#include "hp.h"
#include "statblock.h"

class Warrior : public hp, public StatBlock {
public:
  static const hptype HPGROWTH = (hptype)19u;
  static const stattype BASESTR = (stattype)4u;
  static const stattype BASEINT = (stattype)1u;

  Warrior() : hp(HPGROWTH, HPGROWTH), StatBlock(BASESTR, BASEINT) {};

private:
};

#endif // !WARRIOR_H
