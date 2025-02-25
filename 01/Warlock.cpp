#include "Warlock.hpp"


Warlock::Warlock() {

}

Warlock::Warlock(const Warlock &other){
*this = other;
}

Warlock &Warlock::operator=(const Warlock &other){
this->_name = other._name;
this->_title = other._title;
return *this;
}

	
Warlock::Warlock(const std::string &name, const std::string &a) {
_name = name;
_title = a;
std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
std::cout << _name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getTitle() const{
return _title;
}

const std::string &Warlock::getName() const{
return _name;
}

void	Warlock::setTitle(const std::string title){
_title = title;
}

void	Warlock::introduce() const{
std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	if (spell) {
		if (_sb.find(spell->getName()) == _sb.end())
			_sb[spell->getName()] = spell->clone();
	}
}

void Warlock::forgetSpell(std::string name) {
	if (_sb.find(name) != _sb.end()) {
		delete _sb[name];
		_sb.erase(_sb.find(name));
	}
}

void Warlock::launchSpell(std::string name, ATarget &target) {
	if (_sb.find(name) != _sb.end()) {
		_sb[name]->launch(target);
	}
}
