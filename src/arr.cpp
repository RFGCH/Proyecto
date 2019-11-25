#include "arr.h"
#include <iostream>


using namespace std;

template <class T>
arr<T>::arr()
{
    tam=0;Arr = new T [0];
}
template<class T>
arr<T>::arr(T a){
    tam = 0;
    Arr = new T [1];
    Arr[0]=a;
}
template<class T>
arr<T>::~arr()
{
    delete [] Arr;
}
template<class T>
void arr<T>::size_arr(int t){
    T *aux = new T [tam=t];
    for(int i=0;i<t;i++)
        aux[i]=Arr[i];
    delete [] Arr;
    Arr = aux;
}
template<class T>
void arr<T>::insertar(T a){
    size_arr(tam+1);
    Arr[tam-1]=a;
}
template<class T>
void arr<T>::elimp(int p){
    for(int i = p-1;i<tam; i++)
        Arr[i]=Arr[i+1];
    size_arr(tam-1);
}
