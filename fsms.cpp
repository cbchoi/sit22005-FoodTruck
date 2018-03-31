#include <iostream>
#include <string>

#include "fsms.h"

int main()
{
    std::string name;
    std::cout << "Enter company name: ";
    std::cin >> name;
    FSMS fsms(name);
    
//    std::cout << fsms.get_company_name() << std::endl;
    fsms.top_menu();
    int choice;
    //std::cin >> choice;
    choice = fsms.get_choice();
    
    while(choice != 99)
    {
        // Something
        switch(choice)
        {
            case 1:
            {
                std::cout << "****************" << std::endl; 
                fsms.stock_menu();
                std::string choice;
                std::cout << "Enter number:";
                std::cin >> choice;
                
                while(choice.compare("99") != 0)
                {
                    if(choice.compare("1") == 0)
                        fsms.stock_showlist();
                    else if(choice.compare("2") == 0)
                        fsms.stock_additem();
                    else if(choice.compare("3") == 0)
                        fsms.stock_removeitem();
                    else if(choice.compare("4") == 0)
                        fsms.stock_modifyitem();    
                    fsms.stock_menu();
                    std::cout << "Enter number:";
                    std::cin >> choice;
                }
            }
            break;
            
            case 2:
            {
                /**
                * 
                * You need to Implement
                * 
                */
            }
            break;
            
            case 3:
            {
                /**
                * 
                * You need to Implement
                * 
                */
            }
            break;
            
            break;
            
            default:
            {
                
            }
            break;
        }
        
        fsms.top_menu();
        choice = fsms.get_choice();
    }
    return 0;
}