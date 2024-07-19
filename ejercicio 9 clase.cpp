//9.	Implementar una clase "Empleado" con nombre, cargo y salario, y métodos para obtener y modificar esos datos.
#include<iostream>
#include<string>
using namespace std;

class Empleado {
    private: 
        string Nombre;
        string Cargo;
        double Salario;
    public:
       Empleado(){
        this-> setNombre("Vacio");
        this-> setCargo("Cargo");
        this-> setSalario(0.00);
       }

        Empleado(string Nombre, string Cargo, double Salario){ 
            this-> setNombre(Nombre);
            this-> setCargo(Cargo);
            this-> setSalario(Salario);
        }

        string getNombre(){
            return this->Nombre;
        }
        string getCargo(){
            return this->Cargo;
        }
        double getSalario(){
            return this->Salario;
        }
        void setNombre(string Nombre){
            this->Nombre = Nombre;
        }
        void setCargo(string Cargo){
            this->Cargo = Cargo;
        }
        void setSalario(double Salario){
            if (Salario < 0.0)
                throw invalid_argument("Salario debe ser mayor a 0");
            
            this->Salario = Salario;
        }

};

int main (){
    Empleado Emp1("Hermogenes","Aux.Serv.Cliente",256.89);

    Emp1.setNombre("Pancho Gonzalez");

    cout << Emp1.getNombre() << '\n';
    cout << Emp1.getCargo() << '\n';
    cout << Emp1.getSalario() << '\n';
    return 0;
}