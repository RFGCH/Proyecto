#include <iostream>
#include <arr.h>
#include <GUI.h>
#include <fstream>
#include <vector>

using namespace std;

//Variables Globales
    static vector <Trabajador> a1;
    static vector <Supervisor> a2;
    static vector <Planner> a3;

void CargarArr();
void OrdenarArr();
void DescargarArr();

int main()
{
    CargarArr();
    OrdenarArr();
    DescargarArr();
    GUI A;
    return 0;
}


/*Abre el archivo y carga los datos de todos
los usuarios seleccionando por su funcion*/


void CargarArr(){
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
        else if(rango=="Planner"){
            Planner c(nombre,pass);
            a3.push_back(c);
        }
    }
    leer2.close();
}

//Funcion de ordenamiento
template <class T>
int particion(vector<T>arr,int maxi,int mini){
    T aux = arr[maxi];
    int i=mini-1;
    for(int j=i+1;j<=maxi-1;j++)
        if(arr[j]<aux)
            swap(arr[++i],arr[j]);
    swap(arr[i+1],arr[maxi]);
    return i+1;
}
template <class T>
void quicksort(vector<T>arr,int maxi,int mini = 0){
    if(mini < maxi){
        int p = particion(arr,maxi,mini);
        quicksort(arr,p-1,mini);
        quicksort(arr,maxi,p+1);
    }
}

void OrdenarArr(){
    quicksort(a1,a1.size()-1);
    quicksort(a2,a2.size()-1);
    quicksort(a3,a3.size()-1);
}
void DescargarArr(){
    ifstream leer("Datos//users.txt");
    ofstream registrar("Datos//codigofacilito.txt");
    int tamTra=a1.size();
    int tamSup=a2.size();
    int tamPla=a3.size();
    while (tamPla--){
        registrar << a3[tamPla].getnombre()+"\n";
        registrar << "Planner\n";
        registrar << a3[tamPla].getpasswo()+"\n";
    }
    while (tamSup--){
        registrar << a2[tamSup].getnombre()+"\n";
        registrar << "Supervisor\n";
        registrar << a2[tamSup].getpasswo()+"\n";
    }
    while (tamTra--){
        registrar << a1[tamTra].getnombre()+"\n";
        registrar << "Trabajador\n";
        registrar << a1[tamTra].getpasswo()+"\n";
    }

    leer.close();
    registrar.close();
    remove("Datos//users.txt");
    rename("Datos//codigofacilito.txt","Datos//users.txt");
}
