#include "Money.hpp"

Money::Money() : bills{{500, 2}, {100, 4}, {50, 1}, {20, 1}, {10, 2}, {5, 1}, {1, 5}}
{
}

Money::~Money()
{
}

int Money::total() const
{
    int total = 0;
    for(auto const& x : bills)
        total += x.first * x.second;
    return total;
}

void Money::withdraw(int amount)
{
    std::cout << "Withdrawing " << amount << " : ";
    if (amount > total())
    {
        return;
    }
    
    for(auto it = bills.rbegin(); it != bills.rend(); ++it)
    {
        if (it->second && it->first <= amount)
        {
            int billsAmount = std::min(it->second, (int)(amount/it->first));
            amount -= billsAmount*it->first;
            it->second -= billsAmount;
        }
    }

    if (amount)
    {
        std::cout << "remaining " << amount << ". Split necessary" << std::endl;
        splitFor(amount);
        withdraw(amount);
    }
    else
    {
        std::cout << std::endl;
    }
}

void Money::splitFor(int amount)
{
    auto next = bills.rbegin();
    for (auto it = bills.rbegin(); it != bills.rend(); ++it)
        if (it->first >= amount && it->second)
            next = it;
    
    auto it = next++;
    it->second--;
    next->second += std::floor(it->first / next->first);

    int remainder = it->first % next->first;
    auto test = next;
    while (remainder)
    {
        test++;
        int numBills = std::floor(remainder / test->first);
        test->second += numBills;
        remainder -= test->first*numBills;
    }
}

std::map<int, int>& Money::getBills()
{
    return bills;
}
