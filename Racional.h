class Racional
{
public:
Racional(): numerador(0),denominador(0){}
    Racional(int numerador,int denominador):numerador(numerador),denominador(denominador){

    }
    Racional operator+(const Racional &other);
    Racional operator-(const Racional &other);
    Racional operator*(const Racional &other);
    Racional operator/(const Racional &other);
    void imprimir_fraccion();
    void imprimir_flotante();
private:
    int numerador;
    int denominador;
    void reducir();
    double resultado;
};