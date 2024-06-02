#ifndef NODE_H
#define NODE_H

#include <iostream>

template <typename Node>
class nodik
{
    private:
        nodik<Node> *next;
        int   data;
    public:
        nodik(int d_,  nodik<Node>* n_) : data(d_), next(n_) {}
        int     get_data();
        nodik*  get_node();
        void    set_data(int d_);
        void    set_node(const nodik<Node>* n_);
        nodik();
        ~nodik();
        nodik(const nodik<Node>* obj);
        nodik& operator=(const nodik<Node>* obj); 
};

template class nodik<int>;
#include "Node.cpp"

#endif