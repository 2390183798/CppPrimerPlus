#ifndef DO10_10STACK_H
#define DO10_10STACK_H

typedef unsigned long Item;


class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;

    void list() const;

    bool push(const Item &item);

    bool pop(Item &item);
};

#endif