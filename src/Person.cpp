
#include <iostream>
#include <string>

#include "StreetAddress.cpp"


class Person
{
	private:
		// The name of our person. Kind of important, I suppose.
		std::string name;
		// The address of our person.
		// This will be automatically initialized to be empty.
		StreetAddress addrObj;
		
		
	public:
	
		Person(std::string name, std::string address)
		{
			// The "this" keyword is a pointer to the current class
			// A->B is the same as (*A).B  - Yay shortcuts!
			// Because we use this->, we can use the same
			// keywords in the constructor parameters as the
			// members of the class
			this->name = name;
			
			this->addrObj.address = address;
		}
		
		void display()
		{
			// Send our Person to the pipe.
			std::cout << "Person<Name: " << name << "; Address: ";
			addrObj.display();
			std::cout << ">" << std::endl;
		}
		
};


