#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {

}

ASpell::ASpell (ASpell const &other) {
	*this = other;
}

ASpell &ASpell::operator=(ASpell const &other) {
	this->_name = other.getName();
	this->_effects = other.getEffects();
	return *this;
}

ASpell::~ASpell() {
}
		
std::string ASpell::getName() const {
	return (_name);
}

std::string ASpell::getEffects() const {
	return (_effects);
}

		
void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}

