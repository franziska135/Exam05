#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {

}

ATarget::ATarget (ATarget const &other) {
	*this = other;
}

ATarget &ATarget::operator=(ATarget const &other) {
	this->_type = other.getType();
	return *this;
}

ATarget::~ATarget() {
}
		
std::string ATarget::getType() const {
	return (_type);
}
		
void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _type << " has been" << spell.getEffects() << "!" << std::endl;
}
