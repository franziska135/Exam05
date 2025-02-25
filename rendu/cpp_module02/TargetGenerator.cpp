#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator() {}

TargetGenerator::TargetGenerator(const TargetGenerator &other) {
	*this = other;
}

TargetGenerator&TargetGenerator::operator=(const TargetGenerator &other) {
	_target = other._target;
	return *this;
}

TargetGenerator::~TargetGenerator() {

}

void TargetGenerator::learnTargetType(const ATarget *target) {
	if (target) {
		if (_target.find(target->getType()) == _target.end()) {
			_target[target->getType()] = target->clone();
		}
	}
}

void TargetGenerator::forgetTargetType(const std::string &name) {
	if (_target.find(name) != _target.end()) {
		delete _target[name];
		_target.erase(_target.find(name));
	}
}


ATarget *TargetGenerator::createTarget(const std::string &name) {
	ATarget *tmp = NULL;
	if (_target.find(name) != _target.end())
		tmp = _target[name]->clone();
	return tmp;
}
