#pragma once

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
private:
	std::string _title;
	std::string _name;
	std::map<std::string, ASpell *> _sb;
	Warlock();
	Warlock(const Warlock &other);
	Warlock &operator=(const Warlock &other);
	
public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();
	const std::string &getTitle() const;
	const std::string &getName() const;
	void	setTitle(const std::string);
	void	introduce() const;
	
	void learnSpell(ASpell *spell);
	void forgetSpell(std::string name);
	void launchSpell(std::string name, ATarget &target);

};

