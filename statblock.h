#ifndef STATBLOCK_H
#define STATBLOCK_H
#include <cstdint>

typedef std::uint16_t stattype;

struct StatBlock {
  stattype Strength;
  stattype Intellect;

public:
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

protected:
  void increaseStats(stattype s, stattype i) {
    Strength += s;
    Intellect += i;
  }
};

#endif // !STATBLOCK_
