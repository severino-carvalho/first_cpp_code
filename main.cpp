#include <iostream>
#include <string>

int main()
{
    int b = 0;      //  Solicita ao usu�rio um n�mero inteiro para a base 
    int n = 0;      //  Solicita ao usu�rio um n�mero inteiro para o expoente
    int sum = 1;    //  Vari�vel para usar como somat�rio.

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
        std::cout << "Informe um valor para o expo�nte (Maior que 1):";
        std::cin >> n;

        if(n > 1) {
            break;
        }

        std::cout << "Valor inv�lido\n";
    }

    for (int i = 0; i < n; i++)
    {
        sum *= b;
    }
	
	std::cout << sum;
}
