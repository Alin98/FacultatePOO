#ifndef DISCIPLINEREP_H_INCLUDED
#define DISCIPLINEREP_H_INCLUDED
#include "Discipline.hpp"
#include "Repository.hpp"
#include <vector>

class DisciplineRepository : public Repository<Discipline>
{
public:
   Discipline* findBySubject(std::string name);
   Discipline* findByType(std::string type);


};

#endif // DISCIPLINEREP_H_INCLUDED
