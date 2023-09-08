#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{

    //  Mascota m1;
    // Mascota m2;

    // m1.Comer();
    // m2.Comer();

    std::cout << "La capacidad de int es" << sizeof(int) << std::endl;
    std::cout << "La capacidad de float es" << sizeof(float) << std::endl;
    std::cout << "La capacidad de double es" << sizeof(double) << std::endl;
    std::cout << "La capacidad de char es" << sizeof(char) << std::endl;
    std::cout << "La capacidad de bool es" << sizeof(bool) << std::endl;
    std::cout << "La capacidad de mascota es " << sizeof(Mascota) << std::endl;

    int a = 4;
    std::cout << "a capacidad del dato es " << sizeof(a) << std::endl;
    std::cout << "el contenido del dato es " << a << std::endl;
    std::cout << "la direccion es " << &a << std::endl;

    // c  Memoria dinamica
    std::cout << "Mascota en C" << std::endl;
    Mascota *mascotaC = (Mascota *)malloc(sizeof(Mascota));
    mascotaC->Inicializar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);

    // c++
    std::cout << "Mascota en c++" << std::endl;
    Mascota *mCpp = new Mascota();
    mCpp->DecirNombre();
    mCpp->Destruir();

    return 0;
}