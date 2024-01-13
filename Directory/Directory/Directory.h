#pragma once
#include "Firm.h"

class Directory
{
public:
    Directory() : head(nullptr), tail(nullptr), counter(0) {}
    ~Directory();
    size_t size() const { return counter; }
    void push_back(Firm v);
    void pop_back();
    void DeleteAll();
    Firm* findFirmByName(string name) const;
    Firm* findFirmByOwner(string owner) const;
    Firm* findFirmByPhone(string phone) const;
    Firm* findFirmByActivity(string activity) const;
    void print() const;
    void save(string filename) const;
private:
    Firm* head;
    Firm* tail;
    size_t counter;
};