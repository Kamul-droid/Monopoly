#include "Money.hpp"
#include <iostream>

std::ostream& operator<< (std::ostream& os, Money& money)
{
    for (auto x : money.getBills())
    {
        os << x.first << " : " << x.second << " | ";
    }
    return os;
}

int main(int argc, char const *argv[])
{
    Money test{};
    std::cout << test.total() << std::endl;
    std::cout << test << std::endl;
    test.withdraw(5);
    std::cout << test << std::endl;
    test.withdraw(5);
    std::cout << test << std::endl;
    test.withdraw(5);
    std::cout << test << std::endl;
    test.withdraw(5);
    std::cout << test << std::endl;
    test.withdraw(15);
    std::cout << test << std::endl;
    test.withdraw(15);
    std::cout << test << std::endl;
    test.withdraw(15);
    std::cout << test << std::endl;
    return 0;
}
