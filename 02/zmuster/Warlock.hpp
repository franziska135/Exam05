#pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <iostream>
#include <map>

class ASpell;
class ATarget;
class Warlock {
private:
std::string _name;
std::string _title;
SpellBook sb;
Warlock();
Warlock(const Warlock &other);
Warlock &operator=(const Warlock &other);

public:
Warlock(const std::string &name, const std::string &title);
~Warlock();

const std::string &getName() const;
const std::string &getTitle() const;

void introduce() const;
void setTitle(const std::string title);

void learnSpell(ASpell *spell);
void forgetSpell(std::string name);
void launchSpell(std::string name, ATarget &target);

};
