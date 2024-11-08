#pragma once
#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string _type;
	
	public:
		ATarget(std::string type);
		ATarget &operator=(ATarget const &other);
		ATarget (ATarget const &other);
		
		virtual ~ATarget();
		
		std::string getType() const;
		
		virtual ATarget *clone() const = 0;
		
		void getHitBySpell(ASpell const &spell) const;
};
