// main 

#include "main.h"
#include "menu.cpp" // I don't want to include the cpp file. I had trouble getting the necessary link into header file.  

int main(){

    MainMenu startMenu;
    startMenu.createMenu(0);

    return 0;
};

