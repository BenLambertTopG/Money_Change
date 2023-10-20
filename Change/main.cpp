#include <iostream>

int main()
{

    const int Pound_Value = {100};
    const int Fifties_Value = {50};
    const int Twenties_Value = {20};
    const int Tens_Value = {10};
    const int Fives_Value = {5};
    const int Two_Value = {2};

    int Input_Amount{}, Balance{}, Pounds{}, Fifties{}, Twenties{}, Tens{}, Fives{}, Two_Pennies{}, One_Penny{};

    std::cout << "Please enter the amount of change in pennies:";
    std::cin >> Input_Amount;

    Pounds = Input_Amount / Pound_Value;
    Balance = Input_Amount - (Pounds * Pound_Value);

    Fifties = Balance / Fifties_Value;
    Balance = Fifties * Fifties_Value;

    Twenties = Balance / Twenties_Value;
    Balance = Twenties * Twenties_Value;

    Tens = Balance / Tens;
    Balance = Tens * Tens_Value;

    Fives = Balance / Fives;
    Balance = Fives * Fives_Value;

    Two_Pennies = Balance / Two_Pennies;
    Balance = Two_Pennies * Two_Value;

    One_Penny = Balance;

    std::cout << "\nHere is how to give the correct change:" << std::endl;
    std::cout << "Pounds: " << Pounds << std::endl;
    std::cout << "Fifties: " << Fifties << std::endl;
    std::cout << "Twenties: " << Twenties << std::endl;
    std::cout << "Tens: " << Tens << std::endl;
    std::cout << "Fives: " << Fives << std::endl;
    std::cout << "Two P's: " << Two_Pennies << std::endl;
    std::cout << "One P's: " << One_Penny << std::endl;

    std::cout << std::endl;

    return 0;
}