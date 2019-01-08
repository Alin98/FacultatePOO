#ifndef DISCIPLINE_H_INCLUDED
#define DISCIPLINE_H_INCLUDED

#include "Activity.h"
#include <vector>
#include<string>

class Discipline
{
public:
    Discipline();
    Discipline(std::string subject, std::string type, std::vector<Activity*> activities);

    std::string getSubject();
    std::string getType();

    void setSubject(std::string);
    void setType(std::string);

private:
    std::string mSubject;
    std::string mType;
    std::vector<Activity*> mActivities;
    int mPresences;
};


#endif // DISCIPLINE_H_INCLUDED
