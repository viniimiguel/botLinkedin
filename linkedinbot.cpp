#include <iostream>
#include "funclinkedinbot.h"

void executarAcao(std::function<void()> acao) {
    while (true) {
        Sleep(2000);
        acao();
    }
}
int main()
{
    Bot* b1 = new Bot();


    std::cout << "*-*-**-*-**-*-**-*-**-*-**-*-**-*-*" << std::endl;
    std::cout << "Bem vindo ao LinkedinBot" << std::endl;
    std::cout << "*-*-**-*-**-*-**-*-**-*-**-*-**-*-*" << std::endl;

    std::cout << "Instrucoes: \n" << "1 - Deixe a pagina do seu linkedin aberta em primeiro plano \n" << "2 - Enquanto o bot estiver em funcionamento e importante que voce nao mexa no computador" << std::endl;

    std::cout << "\n" << "Escolha uma das funcoes a serem executadas:" << std::endl;
    std::cout << "1 - Like\n" << "2 - Seguir\n" << "3 - Like e Seguir\n" << "4 - Conexoes\n" << "5 - Participe" << " 6 - Seguir na rede" << std::endl;

    int result;
    std::cin >> result;

    switch (result) {
    case 1:
        executarAcao([&]() { b1->like(); });
        break;
    case 2:
        executarAcao([&]() { b1->seguir(); });
        break;
    case 3:
        executarAcao([&]() { b1->likeSeguir(); });
        break;
    case 4:
        executarAcao([&]() { b1->conexoes(); });
        break;
    case 5:
        executarAcao([&]() { b1->participar(); });
        break;
    case 6:
        executarAcao([&]() { b1->redeSeguir(); });
        break;
    default:
        std::cout << "resposta inválida" << std::endl;
        break;
    }
    

}

