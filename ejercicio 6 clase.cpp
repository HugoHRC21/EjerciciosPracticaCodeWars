//6.	Implementar una clase "Libro" con título, autor y número de páginas, y métodos para obtener y modificar esa información.
#include<iostream>
#include<string>
using namespace std;

class Libro {
    private:
        string Titulo;
        string Autor;
        int Paginas;
    public:
        Libro(){
            this->Titulo = "S/T";
            this->Autor = "S/A";
            this->Paginas = 0;
        }
        Libro(string x, string y, int z){
            Titulo = x;
            Autor = y;
            Paginas = z;                                    
        }
        string getTitulo(){
            return Titulo;
        }
        string getAutor(){
            return Autor;
        }
        int getPaginas(){
            return Paginas;
        }        
        void setTitulo(string Titulo){
            this->Titulo = Titulo;
        }
        void setAutor(string Autor){
            this->Autor = Autor;
        }
        void setPaginas(int Paginas){
            this->Paginas = Paginas;
        }
};

int main (){

        Libro Libroaja("Bajo post-Paja", "hugo rivas", 320);

        Libroaja.setAutor("Chavez contreras");

        cout << Libroaja.getTitulo() << '\n';
        cout << Libroaja.getAutor() << '\n';
        cout << Libroaja.getPaginas() << '\n';

    return 0;
}