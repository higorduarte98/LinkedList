#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

#include <iostream>
#include "Exception.hpp"

using namespace std;

template<class T>
class LinkedList{
    private:
        struct Node
        {
            T data;
            Node* next;
        };

        struct List
        {
            Node* first;
        };

        List list;
        int n;

    public:
        LinkedList();
        ~LinkedList();
        void add(T);
        void remove(int);
        T get(int);
        int size();
        bool empty();
};

template <class T> 
LinkedList<T>::LinkedList(){
    list.first = nullptr;
    n = 0;
}

template <class T> 
LinkedList<T>::~LinkedList(){
    Node* next = nullptr;
    Node* node = list.first;

    if(node == nullptr){
        while(node != nullptr){
            next = node->next;
            delete node;
            node = next;
        }
    }

}

template <class T> 
void LinkedList<T>::add(T data){
    Node* node = list.first;
    Node* aux = new Node;
    aux->data = data;
    aux->next = nullptr;
    
    if(list.first == nullptr){
        list.first = aux;
    }
    
    else{
        while(node->next != nullptr)
            node = node->next;
        node->next = aux;
    }

    n++;
}

template <class T> 
T LinkedList<T>::get(int index){
    Node* node = list.first;

    try{
        if(index > n-1 || index < 0){
            throw(Exception(""));
        }
    }
    catch(Exception e){
        e.printMessageError();
        exit(0);
    }

    for(int i = 0; i < index; i++){
        node = node->next;
    }

    return node->data;
}

template<class T>
void LinkedList<T>::remove(int index){
    Node* previous = nullptr;
    Node* node = list.first;

    try{
        if(index > n-1 || index < 0){
            throw(Exception(""));
        }
    }
    catch(Exception e){
        e.printMessageError();
        exit(0);
    }

    for(int i = 0; i < index; i++){
        previous = node;
        node = node->next;
    }

    if (previous == nullptr)
        list.first = node->next;
    else
        previous->next = node->next;
    delete node;
    n--;
}

template<class T>
int LinkedList<T>::size(){
    return n;
}

template<class T>
bool LinkedList<T>::empty(){
    return (!n);
}

#endif