#ifndef TEACHER_H_INCLUDED
#define TEACHER_H_INCLUDED
#include "Person.h"
class Teacher : public Person
{
public:
	Teacher() {};
	Teacher(std::string CNP, std::string FirstName, std::string LastName, std::string Email, std::string Specializare)
		: person(CNP, FirstName, LastName, Email)
	{
		mSpecializare = Specializare;
	}

	void setSpecializare(std::string);
	std::string getSpecializare() const;
	friend std::istream& operator >> (std::istream& stream, Teacher& ob);
	friend std::ostream& operator << (std::ostream& stream, const Teacher& ob);

private:
	std::string mSpecializare;


};

#endif // TEACHER_H_INCLUDED
