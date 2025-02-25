#include "Warlock.hpp"

Warlock::Warlock() {

}

Warlock::Warlock(Warlock const &other) {
	*this = other;
}

Warlock& Warlock::operator=(Warlock const &other){
	this->_name = other._name;
	this->_title = other._title;
	return *this;
}


Warlock::Warlock (const std::string &name, const std::string &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName()  const {
	return (_name);
}

std::string const &Warlock::getTitle() const {
	return (_title);
}

void Warlock::setTitle(std::string const &str) {
	_title = str;
}

void Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl; 
}

