//4.	Crear una clase "Automóvil" con atributos como marca, modelo y año, y métodos para encender, apagar y mostrar información del automóvil.

#include<iostream>
#include<string>
using namespace std;

class Automovil {
        private:
            string Marca;
            string Modelo;
            int Ano;
        
        public:
//Constructor por Defecto
        Automovil(){
            this->Marca = "S/m";
            this->Modelo = "S/m";
            this->Ano = 0;
        }
        Automovil(string Marca, string Modelo, int Ano){
            this-> Marca = Marca;
            this-> Modelo = Modelo;
            this-> Ano = Ano;                        
        }

//Getters
        string getMarca(){
            return Marca;
        }
        string getModelo(){
            return Modelo;
        }
        int getAno(){
            return Ano;
        }
//Setters
        void setMarca(string Marca ){
            this->Marca = Marca;
        }
        void setModelo(string Modelo ){
            this->Modelo = Modelo;
        }
        void setAno(int Ano ){
            this->Ano = Ano;
        }
//Metodos apagar y encender 
        void Encender(){
            cout << "Encendiendo Vehiculo" << '\n';
        }
        void Apagar(){
            cout << "Apagando Vehiculo" << '\n';
        }        


};

int main (){

    Automovil Auto1;

    Auto1.setMarca("Mclaren");
    Auto1.setModelo("S720-TX");
    Auto1.setAno(2020);
    
    Auto1.Encender();

    cout << Auto1.getMarca() << '\n';
    cout << Auto1.getModelo() << '\n';
    cout << Auto1.getAno() << '\n';

    Auto1.Apagar();



    return 0;
}