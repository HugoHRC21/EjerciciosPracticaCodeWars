//  2.	Implementar una clase "Círculo" con un radio, y métodos para calcular el área y la circunferencia.
#include<iostream>
#include<string>
using namespace std;

class circulo {
    private:
        double radio;

    public:
        circulo() {
            this -> radio = 0;
        }

        circulo(double x){
            radio = x;
        }

        double calculoArea (){
            return  3.14159 * radio * radio;
        }

        double calculoCircun (){
            return 2*3.14159*radio;
        }

 
};

int main (){

    circulo newcirculo(78);

    cout << newcirculo.calculoArea() << '\n';
    cout << newcirculo.calculoCircun() << '\n'; 



    return 0;
}