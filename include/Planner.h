#ifndef PLANNER_H
#define PLANNER_H
#include <iostream>
#include <Persona.h>

using namespace std;

class Planner:public Persona
{
    public:
        Planner(string,string);
        void print();
};

#endif // PLANNER_H
