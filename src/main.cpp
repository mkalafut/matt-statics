
#include "Person.cpp"

int main()
{
	// Initialize both Person classes.
	Person person1 = Person("Jake the Dog", "512 Treehouse Lane");
	Person person2 = Person("Mike Wazowski", "22 You-Got-Your-Life-Back-Lane");
	
	// Call the display functions of both classes.
	person1.display();
	person2.display();
	
	return 0;
}

