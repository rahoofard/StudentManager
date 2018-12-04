#include "student.h"
#include <string>
void student::setName(std::string firstName, std::string lastName)
{
first = firstName;
last = lastName;

}

std::string student::fullName()
{
std::string notfull;
notfull = first += " ";
std::string full;
full = notfull += last;
return full;
}


