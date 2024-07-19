//10.	Desarrollar una clase "Cuenta Bancaria" con número de cuenta, saldo y titular, y métodos para realizar depósitos, retiros y consultar el saldo.
#include<iostream>
#include<string>
using namespace std;

class CuentaBancaria {
    private: 
       string Cta;
       double Saldo;
       string Titular;

    public:
    CuentaBancaria(){
        this->setCta("Vacio");
        this->setSaldo(0.00);
        this->setTitular("S/t");      
    } 
    CuentaBancaria(string Cta, double Saldo, string Titular){
        this->setCta(Cta);
        this->setSaldo(Saldo);
        this->setTitular(Titular);
    }

    string getCta(){
        return this->Cta;
    }
    double getSaldo(){
        return this->Saldo;
    }
    string getTitular(){
        return this->Titular;
    }

    void setSaldo(double z){
        this->Saldo = z;
    }
    void setTitular(string x){
        this->Titular = x;
    }
    void setCta(string y){
        this->Cta = y;
    }

    void setDeposito(double monto){
        if (monto < 0) throw invalid_argument("Monto debe ser mayor a 0");
        
        this -> Saldo = this -> Saldo + monto;
    }
    void setRetiro(double monto){
        if (monto > this -> Saldo) throw invalid_argument("NO tienes suficiente dinero para realizar esta operacion");
        
        this -> Saldo = this -> Saldo - monto;
    }

};

int main (){
   CuentaBancaria Cta1("357183134", 345.67, "Hugo Rivas");

    Cta1.setDeposito(100.00);
    Cta1.setRetiro(50.98);

   cout << Cta1.getTitular() << '\n';
   cout << Cta1.getCta() << '\n';
   cout << Cta1.getSaldo() << '\n';


    return 0;
}