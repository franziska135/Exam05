#include "SpellBook.hpp"


SpellBook::SpellBook() {}

SpellBook::SpellBook(const SpellBook &other) {
	*this = other;
}

SpellBook&SpellBook::operator=(const SpellBook &other) {
	sb = other.sb;
	return *this;
}

SpellBook::~SpellBook() {

}

void SpellBook::learnSpell(const ASpell *spell) {
	if (spell) {
		if (sb.find(spell->getName()) == sb.end()) {
			sb[spell->getName()] = spell->clone();
		}
	}
}

void SpellBook::forgetSpell(const std::string &name) {
	if (sb.find(name) != sb.end()) {
		delete sb[name];
		sb.erase(sb.find(name));
	}
}


ASpell *SpellBook::createSpell(const std::string &name) {
	ASpell *tmp = NULL;
	if (sb.find(name) != sb.end())
		tmp = sb[name]->clone();
	return tmp;
}
