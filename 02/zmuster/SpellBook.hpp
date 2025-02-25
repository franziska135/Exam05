#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <map>

class SpellBook {
private:
std::map<std::string, ASpell *> sb;

public:
SpellBook();
SpellBook(const SpellBook &other);
SpellBook &operator=(const SpellBook &other);
SpellBook(const std::string &name, const std::string &title);
~SpellBook();

void learnSpell(ASpell *spell);
void forgetSpell(std::string const &name);
ASpell *createSpell(std::string const &name);

};
