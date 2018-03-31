#ifndef _FSMS_H
#define _FSMS_H

class FSMS
{
private:
    std::string company_name;
public:
    FSMS(std::string name)
    {
        company_name = name;
    }
private:
    void set_company_name(std::string name)
    {
        company_name = name;
    }
    
public:
    std::string& get_company_name()
    {
        return company_name;
    }
    
public:
    void top_menu()
    {
        std::cout << "Welcome to " << get_company_name() << std::endl;
        std::cout << "1. Stock Management" << std::endl;
        std::cout << "2. Sales Management" << std::endl;
        std::cout << "3. Event Management" << std::endl;
        std::cout << "99. Terminate" << std::endl;
        //std::cout << "Enter number:";
    }
    
    void stock_menu()
    {
        std::cout << get_company_name() << " Stock Menu" << std::endl;
        std::cout << "1. Show current item list" << std::endl;
        std::cout << "2. Add item to the stock" << std::endl;
        std::cout << "3. Remove item from the stock" << std::endl;
        std::cout << "4. Modify item counts" << std::endl;
        std::cout << "99. Go back" << std::endl;
    }
    
    void stock_showlist()
    {
        std::cout << ">> Current item list <<" << std::endl;
        std::cout << "-----------------------" << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
    
    void stock_additem()
    {
        std::string item_name;
        std::string item_cost;
        std::string item_count;
        
        std::cout << ">> Add item to the list <<" << std::endl;
        std::cout << "Enter Item Name:" << std::endl;
        std::cin >> item_name;
        
        std::cout << "Enter Item Cost:" << std::endl;
        std::cin >> item_cost;
        
        std::cout << "Enter Item Count:" << std::endl;
        std::cin >> item_count;
        
        std::cout << "-----------------------" << std::endl;
        std::cout << "Item Name: "  << item_name << std::endl;
        std::cout << "Item Cost: "  << item_cost << std::endl;
        std::cout << "Item Count: " << item_count << std::endl;
        std::cout << "-----------------------" << std::endl;
    }
    
    void stock_removeitem()
    {
        std::string selection;
        std::string choice;
        
        stock_showlist();
        std::cout << "Select an item to remove from the list: "<< std::endl;
        std::cin >> selection;
        std::cout << "Do you want to remove item #" << selection << "? (y/n)" << std::endl;
        std::cin >> choice;
        
        if(choice.compare("y") == 0)
        {
            std::cout << "item #" << selection << " removed." << std::endl;
        }
        else
        {
            std::cout << "operation canceled." << std::endl;
        }
        
    }
    
    void stock_modifyitem()
    {
        std::string selection;
        std::string choice;
        std::string count;
        
        stock_showlist();
        std::cout << "Select an item from the list to modify: "<< std::endl;
        std::cin >> selection;
        std::cout << "Enter a new amount:" << std::endl;
        std::cin >> count;
        
        std::cout << "Do you want to change the amount of item #" << selection << "? (y/n)" << std::endl;
        std::cin >> choice;
        
        if(choice.compare("y") == 0)
        {
            std::cout << "item count has been changed." << std::endl;
        }
        else
        {
            std::cout << "operation canceled." << std::endl;
        }
        
    }
    
    void sales_menu()
    {
        std::cout << get_company_name() << " Sale Menu" << std::endl;
        std::cout << "1. Show Sales History" << std::endl;
        std::cout << "2. Sell Item" << std::endl;
        std::cout << "3. Refund Item" << std::endl;
        std::cout << "99. Go back" << std::endl;
    }
    
    void sales_history()
    {
       /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void sales_sell()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void sales_refund()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_menu()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_showlist()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_addevent()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_removeevent()
    {
       /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_modifyevent()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    void event_cancelevent()
    {
        /**
        * 
        * You need to Implement
        * 
        */
    }
    
    int get_choice()
    {
        int choice;
        std::cout << "Enter number:";
        std::cin >> choice;
        return choice;
    }
};

#endif