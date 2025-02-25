#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <map>

class TargetGenerator {
private:
std::map<std::string, ATarget *> _target;

public:
TargetGenerator();
TargetGenerator(const TargetGenerator &other);
TargetGenerator &operator=(const TargetGenerator &other);
~TargetGenerator();

void learnTargetType(ATarget *target);
void forgetTargetType(std::string const &name);
ATarget *createTarget(std::string const &name);

};
