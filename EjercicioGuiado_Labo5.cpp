#include <iostream>

using namespace std;

int main(){

    int nota;

    cout<<"Ingrese la nota: (0-100) "<<endl;
    cin>>nota;

    if (nota >= 90 && nota <= 100){
    

    cout<<"Excelente, ¡aprobado con honores!";
    }

    else if (nota >= 60 && nota <= 89){

        cout<<"Buen trabajo, ¡aprobado!";
    }
    else if (nota < 60 && nota >= 0){
        cout<<"Lo siento, no has aprobado. Necesitas estudiar más";
    }
    else{
        cout<<"Nota Invalida";
    }
    return 0;
}