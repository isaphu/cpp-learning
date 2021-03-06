#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    OrderBookEntry(double _price,
                   double _amount,
                   std::string _timestamp,
                   std::string _product,
                   OrderBookType _orderType)
        : price(_price),
          amount(_amount),
          timestamp(_timestamp),
          product(_product),
          orderType(_orderType)
    {
    }

    double price;
    double amount;
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
};

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

void printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bid and offer." << std::endl;
}

void printMarketStats()
{
    std::cout << "Market looks good" << std::endl;
}

void enterOffer()
{
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void goToNextTimeFrame()
{
    std::cout << "Going next time frame" << std::endl;
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
        printHelp();
    }
    if (userOption == 2)
    {
        printMarketStats();
    }
    if (userOption == 3)
    {
        enterOffer();
    }
    if (userOption == 4)
    {
        enterBid();
    }
    if (userOption == 5)
    {
        printWallet();
    }
    if (userOption == 6)
    {
        goToNextTimeFrame();
    }
}

int main()
{
    // enum class OrderBookType{bid, ask};
    // using double for precision and not crazy amount
    // there are other data type to represent data
    // double price = 5319.450228;
    // double amount = 0.00020075;
    // std::string timestamp{"2020/03/17 17:01:24.884492"};
    // std::string product{"BTC/USDT"};
    // OrderBookType orderType = OrderBookType::ask;

    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> timestamps;
    // std::vector<std::string> products;
    // std::vector<OrderBookType> orderTypes;

    // prices.push_back(5000.01);
    // amounts.push_back(0.001);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderTypes.push_back(OrderBookType::bid);

    // prices.push_back(10.01);
    // amounts.push_back(0.001);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderTypes.push_back(OrderBookType::ask);

    // //access the dta
    // std::cout << "prices: " << prices[0] << std::endl;
    // std::cout << "prices: " << prices[1] << std::endl;

    // while (true)
    // {
    //     printMenu();

    //     int userOption = getUserOption();
    //     processUserOption(userOption);
    // }
    // return 0;

    /*create an instance of class OrderBookEntry,
    order1 is an object and is an instance of the OrderBookEntry class */

    // create a vector that can store multiple object called orders
    std::vector<OrderBookEntry> orders;

    orders.push_back(OrderBookEntry{
        1000,
        0.02,
        "2020/03/17 17:01:24.884492",
        "BTC/USDT",
        OrderBookType::bid
    });
    orders.push_back(OrderBookEntry{
        1500,
        0.02344,
        "2020/03/17 17:01:24.884492",
        "BTC/USDT",
        OrderBookType::bid
    });
    

    //std::cout << "The prices is " << orders[0].price << std::endl;
    //std::cout << "The amount is " << orders[1].amount << std::endl;

    //iterate over everything in orders, for each thing I will make a copy of that object
    //and store that as order do the condition inside
    for (OrderBookEntry order : orders)
    {
        std::cout << "The price is " << order.price << std::endl;
    }

    // array style syntax
    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The price is " << orders[i].price << std::endl;
    }

    // object style to access item
    for (unsigned int i = 0; i < orders.size(); ++i)
    {
        std::cout << "The price is " << orders.at(i).price << std::endl;
    }

}