#include "ASpell.hpp"


ASpell::ASpell() {

}

ASpell::ASpell(const ASpell &other){
*this = other;
}

ASpell &ASpell::operator=(const ASpell &other){
this->_name = other._name;
this->_effects = other._effects;
return *this;
}

	
ASpell::ASpell(const std::string &name, const std::string &a) {
_name = name;
_effects = a;
}

ASpell::~ASpell(){
}

const std::string &ASpell::getEffects() const{
return _effects;
}

const std::string &ASpell::getName() const{
return _name;
}

void ASpell::launch(const ATarget &target) const {
	target.getHitBySpell(*this);
}

