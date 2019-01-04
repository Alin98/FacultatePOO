#include "Student.h"

std::istream & operator>>(std::istream & stream, Student & ob)
{
	stream >> ob.mCNP >> ob.mFirstName >> ob.mLastName >> ob.mEmail >> ob.mGrupa >> ob.mNrMatricol >> ob.mDomeniu;
	return stream;

}

std::ostream & operator<<(std::ostream & stream, const Student & ob)
{
	stream << ob.mCNP << '\n' << ob.mFirstName << '\n' << ob.mLastName << '\n' << ob.mEmail << '\n' << ob.mGrupa << '\n' << ob.mNrMatricol << '\n' << ob.mDomeniu << '\n';
	return stream;
}
