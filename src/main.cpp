#include <iostream>
#include <string>

int main()
{
    // Select the mode you want your program to open to.

    std::cout << "\nSelect what mode to enter in: \n      1. Normal Mode \n      2. Administrator Mode \n      3. System Mode \n      4. Exit \n\n";
    
    std::string mode;

    while(true)
    {
        std::cout << "Mode: ";
        std::getline(std::cin,mode);
        std::cout << "\n";
        if((mode[0] - '0' > 0 && mode[0] - '0' < 5) && mode[1] == '\0')
        {
            break;
        }else
        {
            std::cout << "Invalid mode. Please try again.\n\n";
        }
    }

    if(mode[0]-'0' == 1)
    {
        // Initialize Normal Mode
    }else if(mode[0]-'0' == 2)
    {
        // Initialize Administrator Mode
    }else if(mode[0]-'0' == 3)
    {
        // Initialize System Mode
    }else if(mode[0]-'0' == 4)
    {
        return 0;
    }else
    {
        // Make the console wait for the user to read the error message.
        std::cout << "Error code: 1";
        int err;
        std::cin>>err;
    }

    return 0;
}