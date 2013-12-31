´/**
  * File : main.cpp
  * Project: Tic Tac Toe By sVEN
  *
  * Date: 32 / 12 / 2013 
  **/
#include <iostream>
#include "tiCtacEngine.h"
#include <ctime>

int main()
{
    srand( time( NULL ) );
    
    
    std::cout << "--------------------------/" << std::endl;
    std::cout << "/  Tic Tac Toe by SVEN      /" << std::endl;
    std::cout << "/-------------------------/" << std::endl;
    do
    {
        if(invalidmove == false){
                playerturn(turn =!turn);
        }
        
	if(turn == 1)	{
		int botschoice = rand() %9;
	        playerchoice = botschoice;
	}
	std::cout << "|" << fyrkant[1]<< "|" << fyrkant[2]<< "|" << fyrkant[3]<< "|" << std::endl;
        std::cout << "|" << fyrkant[4]<< "|" << fyrkant[5]<< "|" << fyrkant[6]<< "|" << std::endl;
        std::cout << "|" << fyrkant[7]<< "|" << fyrkant[8]<< "|" << fyrkant[9]<< "|" << std::endl;
        std::cout << "Player : " << playermarker << " its your turn" << std::endl;
        
        if(turn == 0) std::cin >> playerchoice;

        ismovevalid( playerchoice, playermarker );
        changeboard( playerchoice,playermarker,    invalidmove,   turn );
        checkwinner( playermarker );
        
	system("cls");
    }while(winner == false);
    
    std::cout << "|" << fyrkant[1]<< "|" << fyrkant[2]<< "|" << fyrkant[3]<< "|" << std::endl;
    std::cout << "|" << fyrkant[4]<< "|" << fyrkant[5]<< "|" << fyrkant[6]<< "|" << std::endl;
    std::cout << "|" << fyrkant[7]<< "|" << fyrkant[8]<< "|" << fyrkant[9]<< "|" << std::endl;
    std::cout << "Congratulations, the winner is    " << playermarker << std::endl;
    std::cout << "do you want to "	 << std::endl;
    system("pause");

}
