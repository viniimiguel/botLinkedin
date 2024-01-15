#pragma once
#include "fucmouse.h"
#include "functec.h"
#include "screen.h"
#include "string"
#include <vector>


class Bot
{
public:
	void like();
	void seguir();
	void likeSeguir();
	void rede();
	void participar();
	void conexoes();
	void redeSeguir();
private:
	Moc* m1 = new Moc();
	Tec* t1 = new Tec();
	Screen* s1 = new Screen();
	std::string caminho = "C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\screenshot.png";
	std::vector<std::string> caminhoImgs = { "C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\seguir.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\like.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\minha_rede.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\conectar.png",
		"C:\\Users\\vinicius\\Desktop\\c++\\linkedinbot\\linkedinbot\\linkedinbot\\images\\participe.png"

	};
};