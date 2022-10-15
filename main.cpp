#include <iostream>
#include <string>

int main()
{
    int b = 0;      //  Solicita ao usuário um número inteiro para a base 
    int n = 0;      //  Solicita ao usuário um número inteiro para o expoente
    int sum = 1;    //  Variável para usar como somatório.

    while (true)
    {
        std::cout << "Informe um valor para a base (Maior igual a 2):";
        std::cin >> b;

        if(b >= 2) {
            break;
        }

        std::cout << "Valor invalido\n";
    }

    while (true)
    {
        std::cout << "Informe um valor para o expoênte (Maior que 1):";
        std::cin >> n;

        if(n > 1) {
            break;
        }

        std::cout << "Valor inválido\n";
    }

    for (int i = 0; i < n; i++)
    {
        sum *= b;
    }
	
	std::cout << sum;
}
