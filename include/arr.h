#ifndef ARR_H
#define ARR_H
#include <iostream>
#include <Trabajador.h>
#include <Supervisor.h>
#include <Planner.h>

using namespace std;
template<class T>
class arr
{
    public:
        arr();
        arr(T);
        ~arr();
        void insertar(T);
        void elimp(int);

    private:
        T *Arr;
        int tam;
        void size_arr(int);
};

#endif // ARR_H
