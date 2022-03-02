#ifndef __MONEY_H__
#define __MONEY_H__

#include <map>
#include <iostream>
#include <algorithm>

class Money
{
private:
    std::map<int, int> bills;
public:
    Money();
    ~Money();
    int total() const;
    void withdraw(int amount);
    void splitFor(int amount);
    std::map<int, int>& getBills();
    friend std::ostream& operator<< (std::ostream& stream, const Money& money);
};
#endif // __MONEY_H__