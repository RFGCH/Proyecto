#include <iostream>

using namespace std;

int main()
{


    int inicio = 5;
    int bisciesto = 4;
    int a�o = 2020;
    int mes;

    calendario(int a�o, int mes){
        this -> a�o = init(a�o);
        this -> mes = mes;
    }

    int bis(int bisciesto, int inicio){
        if (bisciesto = 4){
            inicio+=1;
            bisciesto-=4;
        }
        else if(bisciesto = 0){
            inicio-=1;
            bisciesto+=1;
        }
        else{
            bisciesto +=1;
        }
    }

    return 0;
}
