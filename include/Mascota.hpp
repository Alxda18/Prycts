#include <iostream>
#include <string>
#include <cstdio>

class Mascota
{
private:
    std::string nombre;

public:
    Mascota(/* args */)
    {

        this->nombre = "Firulais";
    }
    ~Mascota()
    {
        std::cout << "Adios mundo cruel" << std::endl;
    }

    void Destruir()
    {
        std::cout << "Adios mundo cruel" << std::endl;
    }
    void Inicializar()
    {

        std::cout << "Ha nacido un nuevo perrito" << std::endl;
        this->nombre = "firulais";
    }

    void DecirNombre()
    {

        std::cout << "Mi nombre es:  " << this->nombre << std::endl;
    }
};