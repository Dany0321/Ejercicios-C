#include <iostream>
#include <string>
using namespace std;

class A {
private: 
    int serial;
    string denominacion;
    
public:
    friend A nuevoObjetoLista(int serial, string denominacion);
    int getSerial() { return serial; }
    string getDenominacion() { return denominacion; }
};

class ListaDeObjetos {
private:    
    A* arregloDeA;
    int tamano, posicion;
public:
    ListaDeObjetos() { arregloDeA = new A[20]; tamano = 0; posicion = 0; }
    ~ListaDeObjetos() { delete[] arregloDeA; }

    void agregarObjeto();
    void eliminarObjeto();
    void desplegarInfo();
    void desplegarInfo(int pos);

};

A nuevoObjetoLista(int serial, string denominacion)
{
    A* nuevoObj = new A();
    nuevoObj->serial = serial;
    nuevoObj->denominacion = denominacion;
    return *nuevoObj;
}

void ListaDeObjetos::agregarObjeto()
{
    if (tamano < 20)
    {
        int serial;
        string denominacion;
        cout << "Ingrese el serial del objeto: ";
        cin >> serial;
        cout << "Ingrese la denominacion: ";
        cin >> denominacion;
        arregloDeA[posicion] = nuevoObjetoLista(serial, denominacion);
        posicion++;
        tamano++;
    }
    else
    {
        cout << "No se pueden añadir mas objetos a la lista";
    }    
}

void ListaDeObjetos::eliminarObjeto()
{
    if (tamano > 0)
    {              
        cout << "\nUltimo objeto eliminado con exito\n";
        posicion--;
        tamano--;
    }
    else
    {
        cout << "No se pueden eliminar objetos de la lista";
    }
}

void ListaDeObjetos::desplegarInfo()
{
    cout << "\nLista de objetos completa\n";
    for (int i = 0; i < tamano; i++)
    {
        cout << "Serial: " << arregloDeA[i].getSerial() << " // Denominacion: " << arregloDeA[i].getDenominacion() << endl;
    }
    
}

void ListaDeObjetos::desplegarInfo(int pos)
{
    if (tamano>=pos)
    {
        cout << "\nSerial: " << arregloDeA[pos].getSerial() << " // Denominacion: " << arregloDeA[pos].getDenominacion() << endl;
    }
    else
    {
        cout << "Ese objeto no se encuentra en la lista";
    }
}

int main() {
    int opcion = 0;
    int p;
    ListaDeObjetos* lis = new ListaDeObjetos;
    do
    {
        cout << "\nDigite el numero de la opcion que desea \n" << "1.Agregar un objeto a la lista\n" << "2.Eliminar un objeto de la lista\n" << "3.Desplegar la informacion de un objeto especifico\n" << "4.Desplegar toda la lista\n" << "5.Salir del programa\n\n";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            lis->agregarObjeto();            
            break;
        case 2:
            lis->eliminarObjeto();
            break;

        case 3:
            cout << "Ingrese la posicion del objeto a eliminar: ";
            cin >> p;
            lis->desplegarInfo(p);
            break;

        case 4:
            lis->desplegarInfo();
            break;
        case 5:
            break;
        default:
            cout << "Por favor ingrese una opcion valida\n";
            break;
        }
        
    } while (opcion!=5);

    return 0;
}


