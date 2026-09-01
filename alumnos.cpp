#include <iostream>
#include <string>
using namespace std;

struct reg_estudiantes{
string nombre,carrera,semestre;
float promedio;
}estudiantes[5];

int main()
{
    //registro de alumnos
    for(int i=0;i<5;i++)
    {
        cout<<"ingresa el nombre del estudiante"<<endl;
        cin>>estudiantes[i].nombre;
        cout<<"ingresa la carrera del estudiante"<<endl;
        cin>>estudiantes[i].carrera;
        cout<<"ingresa el semestre del estudiante"<<endl;
        cin>>estudiantes[i].semestre;
        cout<<"ingresa el promedio del estudiante"<<endl;
        cin>>estudiantes[i].promedio;
    }

    for(int i=0;i<5;i++)
    {
        cout<<"nombre:"<<estudiantes[i].nombre<<endl;
        cout<<"carrera:"<<estudiantes[i].carrera<<endl;
        cout<<"semestre actual:"<<estudiantes[i].semestre<<endl;
        cout<<"promedio:"<<estudiantes[i].promedio<<endl;
        cout<<"------------------------------------------------"<<endl;

    }
    return 0;
}
