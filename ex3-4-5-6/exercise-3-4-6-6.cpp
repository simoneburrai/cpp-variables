
#include <iostream>

using namespace std;

int main(){
/*
Dichiarare una variabile costante
 intera chiamata "lunghezza" e assegnarle
 il valore 5. Tentare di modificarne il valore e
 osservare l'errore generato dal compilatore
*/
const int length = 5;
//length = 3
//ERROR: assignment of read-only variable length';

std::cout << "The lenght is " << length << std::endl;

/*Dichiarare una variabile booleana
 chiamata "vero" e assegnarle il valore "true".*/
bool vero = true;
std::cout << vero;
//It prints "1"


/*Dichiarare una variabile intera chiamata
 "valore1" e assegnarle il valore 5. Dichiarare
 una variabile float chiamata "valore2" e assegnarle
 il valore di "valore1" convertito in float.
*/

int value1 = 5;
float value2 = float(value1);

std::cout << "First Value : " << value1;
std::cout << "Second Value : " << value2;


/*
Dichiarare una variabile stringa chiamata "nome"
 e assegnarle il valore "Alice".
*/

string name = "Alice";

std::cout << "The name is " << name;


}
