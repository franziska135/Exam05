#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell {
protected:
std::string _name;
std::string _effects;
ASpell();
ASpell(const ASpell &other);
ASpell&operator=(const ASpell &other);

public:
virtual ~ASpell();
ASpell(const std::string &name, const std::string &effects);

const std::string &getName() const;
const std::string &getEffects() const;

virtual ASpell *clone() const = 0;

void launch(ATarget const &target) const;
};
