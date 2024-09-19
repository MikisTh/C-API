#include <iostream>

float calculadorIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura;
    std::cout << "Digite seu Peso (em kilogramas): ";
    std::cin >> peso;
    std::cout << "Digite sua Altura (em metros): ";
    std::cin >> altura;

    float imc = calculadorIMC(peso, altura);
    std::cout << "Seu IMC é: " << imc << std::endl;

    return 0;
}
