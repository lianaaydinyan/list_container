#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename list>
class nodik
{
private:
public:
    nodik<list>* next;
    list data;
    nodik(list d_, nodik<list>* n_) : data(d_), next(n_) {}
    list get_data();
    nodik<list>* get_node();
    void set_data(list d_);
    void set_node(nodik<list>* n_);
    nodik();
    ~nodik();
    nodik(const nodik<list>* obj);
    nodik& operator=(const nodik<list>* obj);
};

template class nodik<int>;
#include "Node.cpp"

#endif