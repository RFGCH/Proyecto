#include <iostream>

using namespace std;

int main()
{


    int inicio = 5;
    int bisciesto = 4;
    int año = 2020;
    int mes;

    calendario(int año, int mes){
        this -> año = init(año);
        this -> mes = mes;
    }
    int init(int a){
        return a;
    }
    int bis(){
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
