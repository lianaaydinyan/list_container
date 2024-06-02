#include "Node.hpp"

template <typename Node>
int nodik<Node>::get_data()
{
    return data;
}

template <typename Node>
nodik<Node>* nodik<Node>::get_node()
{
    return next;
}

template <typename Node>
void nodik<Node>::set_data(int d_)
{
    data = d_;
}

template <typename Node>
void nodik<Node>::set_node(const nodik<Node>* n_)
{
    next = const_cast<nodik<Node>*>(n_);
}

template <typename Node>
nodik<Node>::nodik() {}

template <typename Node>
nodik<Node>::~nodik() {}

template <typename Node>
nodik<Node>::nodik(const nodik<Node>* obj)
{
    data = obj->data;
    next = obj->next;
}

template <typename Node>
nodik<Node>& nodik<Node>::operator=(const nodik<Node>* obj)
{
    if (this != obj)
    {
        data = obj->data;
        next = obj->next;
    }
    return *this;
}