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

