#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;
class ASpell {
protected:
	std::string _effects;
	std::string _name;

	
public:
	ASpell();
	ASpell(const ASpell &other);
	ASpell &operator=(const ASpell &other);
	ASpell(const std::string &name, const std::string &effects);
	virtual ~ASpell();
	const std::string &getEffects() const;
	const std::string &getName() const;
	
	virtual ASpell *clone() const = 0;
	
	void launch(const ATarget &target) const;

};

