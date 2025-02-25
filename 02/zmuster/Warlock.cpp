#include "Warlock.hpp"

Warlock::Warlock() {
}

Warlock::Warlock(const Warlock &other) {
*this = other;
}

Warlock &Warlock::operator=(const Warlock &other) {
this->_name = other._name;
this->_title = other._title;
return *this;
}


Warlock::Warlock(const std::string &name, const std::string &title) {
_name = name;
_title = title;
std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
std::cout << _name << ": My job here is done!" << std::endl;
}


const std::string &Warlock::getName() const {
return _name;
}

const std::string &Warlock::getTitle() const {
return _title;
}


void Warlock::introduce() const {
std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::setTitle(const std::string title) {
	_title = title;
}

void Warlock::learnSpell(ASpell *spell) {
	sb.learnSpell(spell);
}

void Warlock::forgetSpell(std::string name) {
	sb.forgetSpell(name);
}

void Warlock::launchSpell(std::string name, ATarget &target) {
	if (sb.createSpell(name)) {
		sb.createSpell(name)->launch(target);
	}
}



