#include "Warlock.hpp"


Warlock::Warlock() {}

Warlock::Warlock(const Warlock &other) {
	*this = other;
}

Warlock&Warlock::operator=(const Warlock &other) {
	_name = other._name;
	_title = other._title;
	return *this;
}

Warlock::~Warlock() {
	
std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(const std::string &name, const std::string &title) {
	_name = name;
	_title = title;
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::setTitle(const std::string &title) {
	_title = title;
}

const std::string &Warlock::getName() const {
	return _name;
}

const std::string &Warlock::getTitle() const {
	return _title;
}


void Warlock::learnSpell(const ASpell *spell) {
	sb.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string &name) {
	sb.forgetSpell(name);
}


void Warlock::launchSpell(const std::string &name, const ATarget &target) {
	if (sb.createSpell(name))
		sb.createSpell(name)->launch(target);
}
