#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
class student
{
private:
std::string first;
std::string last;
public:
std::string fullName();
void setName(std::string, std::string);
};
#endif
