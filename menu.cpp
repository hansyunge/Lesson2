/* Main Menu Class - this class creates the main menu
Project 2
Hans Yunge
November 12, 2022
******************************************
Student-School Management System
******************************************
*/

#include "main.h"
#include "menu.h"
#include "studentMenu.cpp"
#include "schoolMenu.cpp"


class MainMenu {
public:

    MainMenu() {

        char menuType;  // why aren't these variable accessible here
        int mc = 0;

    }

    int createMenu(int x) {

        int mc; // menu choice
        char menuType;

        switch (x) {
            case 0:
                for (int i = 0; i < createMainMenu.size(); i++) {
                    cout << createMainMenu[i] << endl;
                    menuType = 'm';
                }
                break;
            case 1:
                for (int i = 0; i < createStudentMenu.size(); i++) {
                    cout << createStudentMenu[i] << endl;
                    menuType = 's';
                }
                break;
            case 2:
                for (int i = 0; i < createSchoolMenu.size(); i++) {
                    cout << createSchoolMenu[i] << endl;
                    menuType = 'x';
                }
                break;
            default:
                return (-1);
                break;
        }


        MainMenu newMenu;

        cout << "Enter menu option: ";
        cin >> mc;
        choice(mc, menuType);


    }

private:
    void choice(int mc, char menuType) {

        switch (mc) {
            case 1: // Create student menu
                createMenu(1);

                break;
            case 2:
                createMenu(2); // Create school menu
                break;
            case 3:
                cout << "Exit Successfull." << endl;
                exit(0);
            default:
                cout << "Please choose 1,2, or 3";
                MainMenu();
                break;
        }

    };
};