#include "Person.h"


std::string Person::get_cnp()
{
    return nCNP;
}
std::string Person::get_fn()
{
    return nFirstName;
}
std::string Person::get_ln()
{
    return nLastName;
}
std::string Person::get_email()
{
    return nEmail;
}
void Person::set_cnp(std::string CNP)
{
    nCNP=CNP;
}
void Person::set_fn(std::string FirstName)
{
    nFirstName=FirstName;
}
void Person::set_ln(std::string LastName)
{
    nLastName=LastName;
}
void Person::set_email(std::string Email)
{
    nEmail=Email;
}
Person::Person(std::string CNP,std::string FirstName,std::string LastName,std::string Email):nCNP(CNP),nFirstName(FirstName),nLastName(LastName),nEmail(Email){}

std::istream& operator>>(std::istream& stream,Person& a)
{
    stream>>a.nCNP>>a.nFirstName>>a.nLastName>>a.nEmail;
    return stream;
}
std::ostream& operator<<(std::ostream& stream,const Person& a)
{
    stream<<a.nCNP<<a.nFirstName<<a.nLastName<<a.nEmail;
    return stream;
}
void Person::AddRole(Role* role)
{
    nRoles.push_back(role);
}
