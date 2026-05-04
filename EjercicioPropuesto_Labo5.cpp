#include <iostream>

using namespace std;

int main(){

    int edad;

    cout<<"Ingrese la edad: (0-110) "<<endl;
    cin>>edad;

    if (edad >= 0 && edad <= 12){
    

    cout<<"Niño";
    }

    else if (edad >= 13 && edad <= 17){

        cout<<"Adolecente";
    }
    else if (edad >=18 && edad <= 64){

        cout<<"Adulto";
    }
    else if ( edad >= 65 && edad <=110){

        cout<<"Anciano";
    }
    else {

        cout<<"Edad Invalida";
    }
    return 0;
}