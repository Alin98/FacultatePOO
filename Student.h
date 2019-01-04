#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include "Person.h"
class Student:public Person
{
public:
	Student() {};
	Student(std::string CNP, std::string FirstName, std::string LastName, std::string Email, int grupa, int NrMatricol, std::string Domeniu)
		: Person(CNP, FirstName, LastName, Email)
	{
		mGrupa = grupa;
		mNrMatricol = NrMatricol;
		mDomeniu = Domeniu;
	}
	friend std::istream& operator >> (std::istream& stream, Student& ob);
	friend std::ostream& operator << (std::ostream& stream, const Student& ob);

private:
	int mGrupa;
	int mNrMatricol;
	std::string mDomeniu;

};
#endif // STUDENT_H_INCLUDED
