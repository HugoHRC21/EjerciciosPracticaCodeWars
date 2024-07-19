// 3.	Diseñar una clase "Estudiante" con atributos como nombre, número de estudiante y promedio, y métodos para mostrar los datos del estudiante.
#include<iostream>
#include<string>
using namespace std;

class estudiante {
    private:
        string Nombre;
        int ID;
        double Promedio;

    public:

        estudiante() {
            this -> setNombre("s/n");
            this -> setID(0);
            this -> setPromedio(0);
        }

        string getNombre(){
            return Nombre;
        }

        int getID() {
            return ID;
        }
        double getPromedio(){
            return Promedio;
        }

        void setNombre(string nombre){
            this->Nombre = nombre;
        }
        void setID(int id){
            this->ID = id;
        }
        void setPromedio(double promedio){
            this->Promedio = promedio;
        }
};

int main (){

    estudiante estudiante1;


    cout << estudiante1.getNombre() << '\n';
    cout << estudiante1.getID() << '\n';
    cout << estudiante1.getPromedio() << '\n';

    return 0;
}