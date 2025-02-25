#pragma once

#include <iostream>
#include "ATarget.hpp"
#include <map>

class ATarget;
class TargetGenerator {
private:
std::map<std::string, ATarget *> _target;
TargetGenerator(const TargetGenerator &other);
TargetGenerator&operator=(const TargetGenerator &other);

public:
~TargetGenerator();
TargetGenerator();

void learnTargetType(const ATarget *target);
void forgetTargetType(const std::string &name);
ATarget *createTarget(const std::string &name);
};
