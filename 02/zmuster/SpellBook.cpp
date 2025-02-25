#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::SpellBook(const SpellBook &other) {
*this = other;
}

SpellBook &SpellBook::operator=(const SpellBook &other) {
this->sb = other.sb;
return *this;
}

SpellBook::~SpellBook() {
}



void SpellBook::learnSpell(ASpell *spell) {
	if (spell) {
		sb[spell->getName()] = spell->clone();
	}
}

void SpellBook::forgetSpell(std::string const &name) {
	if (sb.find(name) != sb.end()) {
		delete sb[name];
		sb.erase(sb.find(name));
	}
}

ASpell *SpellBook::createSpell(std::string const &name) {
	ASpell *tmp = NULL;
	if (sb.find(name) != sb.end()) {
		tmp = sb[name];
	}
	return tmp;
}

