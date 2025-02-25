#pragma once

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>

class Warlock {
private:
std::string _name;
std::string _title;
std::map<std::string, ASpell *> sb;
Warlock();
Warlock(const Warlock &other);
Warlock&operator=(const Warlock &other);

public:
~Warlock();
Warlock(const std::string &name, const std::string &title);

void introduce() const;
void setTitle(const std::string &title);

const std::string &getName() const;
const std::string &getTitle() const;

void learnSpell(const ASpell *spell);
void forgetSpell(const std::string &name);
void launchSpell(const std::string &name, const ATarget &target);
};
