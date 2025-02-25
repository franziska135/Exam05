#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget {
protected:
std::string _type;
ATarget();
ATarget(const ATarget &other);
ATarget&operator=(const ATarget &other);

public:
virtual ~ATarget();
ATarget(const std::string &types);

const std::string &getType() const;

virtual ATarget *clone() const = 0;

void getHitBySpell(ASpell const &spell) const;
};
