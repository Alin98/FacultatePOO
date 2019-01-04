#include <iostream>
#include "Person.h"
#include "Role.h"
#include "Activity.h"
#include "Room.h"
//#include "TeacherRole.h"
#include "StudentRole.h"
#include "ActivityRepository.h"
#include "PersonRepository.h"
#include "RoomRepository.h"
#include "Person.h"

int main()
{
	PersonRepository p;
	RoomRepository r;
	ActivityRepository a;
	p.add(new Person("1234", "Ion", "Alex", "ionalex@gmail.com"));
	//r.add(new Room("Titeica"));
	//a.add(new Activity(r.findByName("Titeica"), p.findByCNP("1983213"), "Laborator"));

	return 0;


}

