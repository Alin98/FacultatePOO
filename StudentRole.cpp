#include "StudentRole.h"
#include "Role.h"

class StudentRole:public Role
{
public:
	StudentRole():Role(STUDENT_ROLE) {};

};
