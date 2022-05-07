#include <iostream>

void printMenu()
{
    // 1 print help
    std::cout << "1: Print help" << std::endl;
    // 2 print exchange stats
    std::cout << "2: Print exchange stats" << std::endl;
    // 3 make an offer
    std::cout << "3: Make an offer" << std::endl;
    // 4 make a bid
    std::cout << "4: Make a bid" << std::endl;
    // 5 print wallet (store our current assets)
    std::cout << "5: Print wallet" << std::endl;
    // 6 continue (each time interval it will calculate how much you made)
    std::cout << "6: Continue" << std::endl;

    std::cout << "===============" << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cout << "Type in 1-6" << std::endl;
    std::cin >> userOption;
    std::cout << "You chose: " << userOption << std::endl;
    return userOption;
}

void processUserOption(int userOption)
{
    if (userOption == 0)
    {
        std::cout << "Invalid choice. Choose 1-6" << std::endl;
    }
    if (userOption == 1)
    {
        std::cout << "Help - your aim is to make money. Analyse the market and make bid and offer." << std::endl;
    }
    if (userOption == 2)
    {
        std::cout << "Market looks good" << std::endl;
    }
    if (userOption == 3)
    {
        std::cout << "Make an offer - enter the amount" << std::endl;
    }
    if (userOption == 4)
    {
        std::cout << "Make a bid - enter the amount" << std::endl;
    }
    if (userOption == 5)
    {
        std::cout << "Your wallet is empty" << std::endl;
    }
    if (userOption == 6)
    {
        std::cout << "Going next time frame" << std::endl;
    }
}

int main()
{
    while (true)
    {
        printMenu();

        int userOption = getUserOption();
        processUserOption(userOption);
    }
    return 0;
}