#ifndef REPOSITORY_H_INCLUDED
#define REPOSITORY_H_INCLUDED
#include <vector>

template<class R>
class Repository
{
  public:
  void add(T *ob);
  void remove(T *ob);
  void print() ;
  protected:
  std::vector<T*>mEntities;
};


#endif // REPOSITORY_H_INCLUDED
