#include "Repository.h"
#include <iostream>

template<class R>
void Repository<R>::add(T*ob)
{
    mEntities.push_back(ob);
}
template <class R>
void Repository<R>::remove(R*ob)
{
    for(unsigned int i=0;i<=mEntities.size();i++)
    if(mEntities[i]==ob)
    mEntities.erase(mEntities.begin()+i);
}
template<class R>
void Repository<R>::print()
{
    for(unsigned int i=0;i<=mEntities.size();i++)
    std::cout<<mEntities[i]<<"";
    std::cout<<'\n';
}
