//5.	Desarrollar una clase "Rectángulo" con base y altura, y métodos para calcular el área y el perímetro.b
#include<iostream>
#include<string>
using namespace std;

class Rectangulo {
        private:
            double Base;
            double Altura;
        public:
            Rectangulo(){
                this->Altura = 0;
                this->Base = 0;
            }

            Rectangulo(double Base, double Altura){
                this->Base = Base;
                this->Altura = Altura;
            }

            void setAltura(double Altura){
                this->Altura = Altura;
            }
            void setBase(double Base){
                this->Base = Base;
            }

            double Area (){
                return Base * Altura;
            } 
            double Perimetro (){
                return (2 * Base) * (2 * Altura);
            } 

};

int main (){

    Rectangulo hey1(5,5);

    hey1.setAltura(10);
    hey1.setBase(10);

    cout << hey1.Area() << '\n';
    cout << hey1.Perimetro() << '\n';


    return 0;
}