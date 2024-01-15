#include <iostream>
#include "funclinkedinbot.h"
#include <Windows.h>


void Bot::seguir()
{
	Sleep(1000);
	s1->screenshotsave(caminho);
	auto seguir = s1->locatecenteronscreen(caminho, caminhoImgs[0], 0.95);
	int clicks = 0;
	if (seguir.first)
	{
		m1->moveTo(seguir.second.first, seguir.second.second, 0);
		m1->click(1, "left");
		clicks++;
		if(clicks == 1)
		{
			clicks = 0;
			t1->pressansy(0x22, 1);
		}
	}
	else
	{
		std::cout << "imagem nao encontrada" << std::endl;
		t1->pressansy(0x22, 1);
	}
}
void Bot::like()
{

	Sleep(100);
	s1->screenshotsave(caminho);
	auto like = s1->locatecenteronscreen(caminho, caminhoImgs[1], 0.95);
	int clicks = 0;
	if (like.first)
	{
		m1->moveTo(like.second.first, like.second.second, 0);
		m1->click(1, "left");
		clicks++;
		if (clicks == 1)
		{
			clicks = 0;
			Sleep(200);
			t1->pressansy(0x22, 1);
		}
	}
	else
	{
		std::cout << "imagem nao encontrada" << std::endl;
		t1->pressansy(0x22, 1);
	}


}
void Bot::likeSeguir()
{
	Sleep(1000);
	s1->screenshotsave(caminho);
	auto seguir = s1->locatecenteronscreen(caminho, caminhoImgs[0], 0.95);
	auto like = s1->locatecenteronscreen(caminho, caminhoImgs[1], 0.95);
	int clicksLike = 0;
	int clicksSeguir = 0;
	if(like.first)
	{
		m1->moveTo(like.second.first, like.second.second, 0);
		Sleep(100);
		m1->click(1, "left");
		clicksLike++;
		if(seguir.first)
		{
			m1->moveTo(seguir.second.first, seguir.second.second, 0);
			m1->click(1, "left");
			clicksSeguir++;
		}
		else if(clicksLike == 1 || clicksSeguir == 1)
		{
			clicksLike = 0;
			clicksSeguir = 0;
			t1->pressansy(0x22, 1);
		}
		t1->pressansy(0x22, 1);
	}
	else if(seguir.first)
	{
		m1->moveTo(seguir.second.first, seguir.second.second, 0);
		m1->click(1, "left");
		clicksSeguir++;
		if(clicksSeguir == 1)
		{
			clicksSeguir = 0;
			t1->pressansy(0x22, 1);
		}
	}
}
void Bot::rede()
{
	Sleep(1000);
	s1->screenshotsave(caminho);
	auto rede = s1->locatecenteronscreen(caminho, caminhoImgs[2], 0.95);
	if(rede.first)
	{
		m1->moveTo(rede.second.first, rede.second.second, 0);
		m1->click(1, "left");
	}
}
void Bot::conexoes()
{
	while(true)
	{
		
		Sleep(1000);
		s1->screenshotsave(caminho);
		auto conexoes = s1->locatecenteronscreen(caminho, caminhoImgs[3], 0.95);
		if(conexoes.first)
		{
			m1->moveTo(conexoes.second.first, conexoes.second.second, 0);
			m1->click(1, "left");
		}
		else
		{
			t1->pressansy(0x22, 1);
		}
	}
}
void Bot::participar()
{
	Sleep(1000);
	s1->screenshotsave(caminho);
	auto participar = s1->locatecenteronscreen(caminho, caminhoImgs[4], 0.95);
	if(participar.first)
	{
		m1->moveTo(participar.second.first, participar.second.second, 0);
		m1->click(1, "left");
	}
	else
	{
		t1->pressansy(0x22, 1);
	}
}
void Bot::redeSeguir()
{
	Sleep(1000);
	s1->screenshotsave(caminho);
	auto redeseguir = s1->locatecenteronscreen(caminho, caminhoImgs[5], 0.95);
	if(redeseguir.first)
	{
		m1->moveTo(redeseguir.second.first, redeseguir.second.second, 0);
		m1->click(1, "left");
	}
	else
	{
		t1->pressansy(0x22, 1);
	}
}