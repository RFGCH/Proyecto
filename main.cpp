#include <iostream>
#include <arr.h>
#include <GUI.h>
#include <fstream>
#include <vector>

using namespace std;
/*
class Maquina{

  private:

    string nombre,codigo,clase;
    int datos,nro;

  public:

    Maquina(int nro){
        ifstream("Datos//maquinas");
        getline(leer,nombre);
        getline(leer,codigo);
        getline(leer,clase);
        getline(leer,datos);
    }
    //function get
    string getnombre()const{
        return nombre;
    }
    string getcodigo()const{
        return codigo;
    }
    string getclase()const{
        return clase;
    }
    string getresumen()const{
        return resumen;
    }
    string getdescripcion()const{
        return descripcion;
    }
    //function set
    void setnombre(string nombre){
       this -> nombre = nombre;
    }
    void setcodigo(string codigo){
        this -> codigo = codigo;
    }
    void setclase(string clase){
        this -> clase = clase;
    }
    void setresumen(string resumen){
        this -> resumen = resumen;
    }
    void setdescripcion(string descripcion){
        this -> descripcion = descripcion;
    }
    //function print
    void printr(){
        cout << "\n ---- " << nombre << " ---   \n"<< endl;
        cout << "\n  Tipo:    " << clase << endl;
        cout << "\n  Codigo:  " << codigo << endl;
        cout << "\n  Resumen: " << resumen << endl;
    }
    void print(){
        cout << "\n ---- " << nombre << " ---   \n"<< endl;
        cout << "\n  Tipo:    " << clase << endl;
        cout << "\n  Codigo:  " << codigo << endl;
        cout << "\n  Descripcion: " << resumen << endl;
    }
};
*/
template <class T>
int particion(T arr[],int max,int min){

    T p=arr[max];
    int i=min-1;

    for(int j=i+1;j<=max-1;j++)
        if(*(arr+j)<p)
            swap(*(++i+arr),*(arr+j));

    swap(*(arr+i+1),*(arr+max));
    return i+1;

}
template <class T>
void quicksort(T arr[],int max,int min = 0){

    if(min < max){
        int p = particion(arr,max,min);
        quicksort(arr,p-1,min);
        quicksort(arr,max,p+1);
    }

}
int main()
{
    ifstream leer("Datos//users.txt");
    int tam;
    while(!leer.eof()){
        string registro;
        getline(leer,registro);
        tam++;
    }
    leer.close();
    tam/=3;
    vector <Trabajador> a1;
    vector <Supervisor> a2;
    vector <Planner> a3;
    ifstream leer2("Datos//users.txt");
    while(!leer2.eof()){
        string nombre,pass,rango;
        getline(leer2,nombre);
        getline(leer2,rango);
        getline(leer2,pass);
        if(rango=="Trabajador"){
            Trabajador a(nombre,pass);
            a1.push_back(a);
        }
        else if(rango=="Supervisor"){
            Supervisor b(nombre,pass);
            a2.push_back(b);
        }
        else{
            Planner c(nombre,pass);
            a3.push_back(c);
        }
    }


    quicksort <Trabajador> (a1*,a1.size());

    leer2.close();

    GUI A;




    return 0;
}
