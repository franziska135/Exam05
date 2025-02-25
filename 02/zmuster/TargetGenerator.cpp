#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::TargetGenerator(const TargetGenerator &other) {
*this = other;
}

TargetGenerator &TargetGenerator::operator=(const TargetGenerator &other) {
this->_target = other._target;
return *this;
}

TargetGenerator::~TargetGenerator() {
}



void TargetGenerator::learnTargetType(ATarget *target) {
	if (target) {
		_target[target->getType()] = target;
	}
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	if (_target.find(target) != _target.end()) {
		_target.erase(_target.find(target));
	}
}

ATarget *TargetGenerator::createTarget(std::string const &name) {
	ATarget *tmp = NULL;
	if (_target.find(name) != _target.end()) {
		tmp = _target[name];
	}
	return tmp;
}
