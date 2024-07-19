//1.	Crear una clase "Perro" con atributos como nombre, raza y edad, y métodos para obtener y modificar esos atributos.
#include<iostream>
#include<string>
using namespace std;

class perro {
    private: 
        string Nombre;
        string Raza;
        int Edad;
    
    public:
        perro() {
            this -> setNombre("s/n");
            this -> setRaza("s/r");
            this -> setEdad(0); 
        }

    //Getters
        string getNombre(){
            return Nombre;
        }
        string getRaza(){
            return Raza;
        }
        int getEdad(){
            return Edad;
        }
    //Setters
        void setNombre(string x){
            Nombre = x;
        }
        void setRaza(string y){
            Raza = y;
        }
        void setEdad(int z){
            Edad = z;
        }                

};

int main (){

    perro perro1;

    perro1.setEdad(25);
    perro1.setNombre("estrogonof");
    perro1.setRaza("pecatumpi");


    cout << perro1.getEdad() << '\n';  
    cout << perro1.getNombre() << '\n';
    cout << perro1.getRaza() << '\n';


    return 0;
}