/*Dichiarare una variabile di tipo
 float chiamata "altezza" e
 assegnarle il valore inserito
 dall'utente da tastiera.*/

#include <iostream>

int main(){

float user_height;

std::cout <<  "Insert your height";

std::cin >> user_height;

std::cout << "Your Height is " << user_height << std::endl;

}
