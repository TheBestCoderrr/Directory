#include "Directory.h"

Directory::~Directory() { DeleteAll(); }

void Directory::push_back(Firm v)
{
    Firm* temp = new Firm(v);
    if (tail)
        tail->setNext(temp);
    else
        head = temp;
    tail = temp;
    ++counter;
}

void Directory::pop_back()
{
    if (!head) return;
    else if (head == tail) {
        delete head;
        head = nullptr;
        counter = 0;
        return;
    }
    Firm* temp = head;
    while (temp->getNext() != tail)
        temp = temp->getNext();
    tail = temp;
    tail->setNext(nullptr);
    delete temp->getNext();
    --counter;
}

void Directory::DeleteAll() { while (counter > 0) pop_back(); }

Firm* Directory::findFirmByName(string name) const
{
    Firm* cur = head;
    while (cur) {
        if (cur->getName() == name) return cur;
        cur = cur->getNext();
    }
    return nullptr;
}

Firm* Directory::findFirmByOwner(string owner) const
{
    Firm* cur = head;
    while (cur) {
        if (cur->getOwner() == owner) return cur;
        cur = cur->getNext();
    }
    return nullptr;
}

Firm* Directory::findFirmByPhone(string phone) const
{
    Firm* cur = head;
    while (cur) {
        if (cur->getPhone() == phone) return cur;
        cur = cur->getNext();
    }
    return nullptr;
}

Firm* Directory::findFirmByActivity(string activity) const
{
    Firm* cur = head;
    while (cur) {
        if (cur->getActivity() == activity) return cur;
        cur = cur->getNext();
    }
    return nullptr;
}

void Directory::print() const
{
    Firm* cur = head;
    while (cur) {
        cur->print();
        cur = cur->getNext();
    }
    cout << endl;
}

void Directory::save(string filename) const
{
    Firm* cur = head;
    while (cur) {
        try { cur->save(filename); }
        catch (exception ex) { 
            cout << ex.what() << endl; 
            return; 
        }
        cur = cur->getNext();
    }
}
