#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class ASpell;
class SpellBook;
class SpellBook {
private:
std::map<std::string, ASpell *> sb;
SpellBook(const SpellBook &other);
SpellBook&operator=(const SpellBook &other);

public:
~SpellBook();
SpellBook();

void learnSpell(const ASpell *spell);
void forgetSpell(const std::string &name);
ASpell *createSpell(const std::string &name);
};
