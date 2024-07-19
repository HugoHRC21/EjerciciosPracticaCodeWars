//8.	Crear una clase "Producto" con nombre, precio y cantidad en stock, y métodos para modificar y mostrar esa información.
#include<iostream>
#include<string>
using namespace std;

class Producto {
     private:
        string Nombre;
        double Precio;
        int Cantidad;
    public:
        Producto(){
            this-> Nombre = "Vacio";
            this-> Precio = 0.0;
            this-> Cantidad = 0;  
        }
        Producto(string Producto, double x, int y){
            Nombre = Producto;
            Precio = x;
            Cantidad = y;
        }

        string getNombre(){
            return Nombre;
        }
        double getPrecio(){
            return Precio;
        }
        int getCantidad(){
            return Cantidad;
        }

        void setNombre(string Nombre){
            this->Nombre = Nombre;
        }
        void setPrecio(double Precio){
            this->Precio = Precio;
        }
        void setCantidad(int Cantidad){
            this->Cantidad = Cantidad;
        }
};

int main (){

    Producto Pro1("Cachapas-6und-Peq", 2.56, 50);

    Pro1.setPrecio(3.56);

    cout << Pro1.getNombre() << '\n';
    cout << Pro1.getPrecio() << '\n';
    cout << Pro1.getCantidad() << '\n';

    return 0;
}