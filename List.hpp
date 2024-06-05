#ifndef LIST_H
#define LIST_H

#include "Node.hpp"

template <typename list>
class My_list
{
public:
    nodik<list>* head;
    My_list() : head(nullptr) {}
    ~My_list();
    void print_data(nodik<list>* node);
    nodik<list>* get_node() { return head; }
    void set_node(nodik<list>* node) { head = node; }
    void insert(nodik<list>* node);
    void add_node(nodik<list>* node);
    list pop_front();
    void push_front(list val);
    int findn_pos(nodik<list>* node, const list& n); // find n and return  its pos
    void rotate_linked_list(nodik<list>* node); // rottate list
};

template class My_list<int>;
#include "List.cpp"

#endif // LIST_H