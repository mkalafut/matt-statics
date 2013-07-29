
#include <iostream>
#include <string>


class StreetAddress
{
	public:
		// The address stored in the class.
		std::string address;
		
		// Display the address (no newline so we can use it in Person.
		void display() {std::cout << this->address;};
};



