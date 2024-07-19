//7.	Diseñar una clase "Triángulo" con base y altura, y métodos para calcular el área y mostrar los datos.
#include<iostream>
#include<string>
using namespace std;

class Triangulo {
        private:
            double Base;
            double Altura;
        public:
            Triangulo(){
                this-> Base = 0;
                this-> Altura = 0;
            }
            Triangulo(double Base, double Altura){
                this-> Base = Base;
                this-> Altura = Altura;
            }
            double getBase(){
                return Base;
            }
             double getAltura(){
                return Altura;
            }
            void setBase(double x){
                Base = x;
            }
            void setAltura(double y){
                Altura = y;
            }  
                      
            double AreaTriangulo(){
                return (Base * Altura)/2;
            }
};

int main (){
    Triangulo Tri1(67,23);

    Tri1.setAltura(46);

    cout << Tri1.AreaTriangulo() << '\n';
    
    return 0;
}