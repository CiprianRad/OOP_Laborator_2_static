//
// Created by Ciprian on 3/13/2025.
//
#include <iostream>
#include "service.h"
#include "ui.h"
using namespace std;

void show_options() {
    std::cout << "Welcome to the list app!"<<std::endl;
    std::cout << "Choose an option:"<<std::endl;
    std::cout << "1.Show list"<<std::endl;
    std::cout << "2.Create list"<<std::endl;
    std::cout << "3.Sort list in ascending order" <<std::endl;
    std::cout << "4.Show list with adjacent numbers with 2 common digits"<<std::endl;
    std::cout << "5.Exit."<<std::endl;

}


void menu() {
    int a[100];
    char option;
    int length = 0;
    do {
        show_options();
        std::cin>>option;
        switch (option) {
            case '1':
                show_data(length, a);
            break;
            case '2':
                get_data(length, a);
            break;
            case '3':
                functionality_1(length, a);
            break;
            case '4':
                functionality_10(length, a);
            break;
            case '5':
                std::cout<<"Exiting program..."<<std::endl;
            break;
            default:
                std::cout<<"Wrong option!"<<std::endl;



        }
    }
    while(option!='5');
}