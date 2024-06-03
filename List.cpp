#include "List.hpp"

template <typename list>
My_list<list>::~My_list() 
{
    while (head != nullptr)
    {
        nodik<list>* temp = head;
        head = head->next;
        delete temp;
    }
}

template <typename list>
void My_list<list>::insert(nodik<list>* node)
{
    if (head == nullptr)
    {
        head = node;
    }
    else
    {
        nodik<list>* current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = node;
    }
}

template <typename list>
void My_list<list>::print_data(nodik<list>* node)
{
    std::cout << node->data << std::endl;
}

template <typename list>
void My_list<list>::add_node(nodik<list>* node)
{
    insert(node);
}

template <typename list>
list My_list<list>::pop_front()
{
    if (head == nullptr)
    {
        std::cout << " There is no element to pop " << std::endl;
    }
    list val = head->data;
    nodik<list>* tmp = head;
    head = tmp->next;
    delete tmp;
    return val;
}

template <typename list>
void My_list<list>::push_front(list val)
{
    nodik<list>* new_node = new nodik<list>(val, head);
    new_node->data = val;
    new_node->next = head;
    head = new_node;
}