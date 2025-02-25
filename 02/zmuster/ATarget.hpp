#pragma once

#include "ASpell.hpp"
#include <iostream>

class ASpell;
class ATarget {
protected:
std::string _type;

public:
ATarget();
ATarget(const ATarget &other);
ATarget &operator=(const ATarget &other);
ATarget(const std::string &type);
virtual ~ATarget();

const std::string &getType() const;

virtual ATarget *clone() const = 0;

void getHitBySpell(const ASpell &target) const;
};
