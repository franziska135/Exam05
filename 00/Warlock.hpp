#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock {
private:
	std::string _title;
	std::string _name;
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

};

#endif
