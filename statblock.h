#ifndef STATBLOCK_H
#define STATBLOCK_H
#include "stattypes.h"

struct StatBlock {
  stattype Strength;
  stattype Intellect;
  StatBlock() {
    Strength = (stattype)1u;
    Intellect = (stattype)1u;
  }
  explicit StatBlock(stattype s, stattype i) {
    Strength = s;
    Intellect = i;
  }
  stattype getStrength() { return Strength; }
  stattype getIntellect() { return Intellect; }
};

#endif // !STATBLOCK_
