#include <iostream>

class Warlock {
	private:
		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);
		std::string _name;
		std::string _title;
	public:
		Warlock (const std::string &name, const std::string &title);
		~Warlock();
		std::string const &getName() const;
		std::string const &getTitle() const;
		void setTitle(std::string const &str);
		void introduce() const;
};
