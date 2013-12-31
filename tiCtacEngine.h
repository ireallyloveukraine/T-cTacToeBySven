#include <iostream>
//variables
bool     turn             = false;
bool     winner           = false;
char     playermarker;
int      cpuchoice;
bool     invalidmove      = false;
char     fyrkant[10]      = {'0','1','2','3','4','5','6','7','8','9'};
int      playerchoice = 0;
/*------------variables---------------------*///function to count who is winnner
// This function will store the winning conditions
void checkwinner(char playermarker)
{
    if(fyrkant[1] == playermarker &&
        fyrkant[2] == playermarker &&
         fyrkant[3] == playermarker){
        winner = true;
    }

    else if(fyrkant[4] == playermarker && fyrkant[5]  == playermarker &&fyrkant[6] == playermarker){
                    winner = true;
    }
	else if(fyrkant[7] == playermarker && fyrkant[8]  == playermarker && fyrkant[9] == playermarker){
                    winner = true;
    }

    else if(fyrkant[1] == playermarker && fyrkant[5]  == playermarker && fyrkant[9] == playermarker){
                    winner = true;
    }
	else if(fyrkant[3] == playermarker &&fyrkant[5]  == playermarker &&fyrkant[7] == playermarker){
                    winner = true;
    }
	 else if(fyrkant[1] == playermarker &&fyrkant[4]  == playermarker &&fyrkant[7] == playermarker){
                    winner = true;
    }
	 else if(fyrkant[2] == playermarker &&fyrkant[5]  == playermarker &&fyrkant[8] == playermarker){
                    winner = true;
    }
	 else if(fyrkant[3] == playermarker &&fyrkant[6]  == playermarker &&fyrkant[9] == playermarker){
                    winner = true;
    }
}
// check playerturn and then set playermarker
void playerturn( bool turn )
{
    if(turn == false)
       playermarker = 'x';
    else
       playermarker = 'o';
}
//Function that changes the 1-9 playerboard depending on if invalidmove is false
void changeboard(int playerchoice, char playermarker, bool invalidmove, bool turn)
{
	if( invalidmove == false)
        fyrkant[playerchoice] = playermarker;
}


//check players choice that is passed to it, set the invalidmove
void ismovevalid( int playerchoice,  char playermarker )
{
    if(fyrkant[playerchoice] == 'x' || fyrkant[playerchoice] == 'o'){
        invalidmove = true;
    }else {
        invalidmove = false;
    }
}
