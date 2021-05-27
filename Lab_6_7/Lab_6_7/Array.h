#pragma once
#include <iostream>
using namespace std;

template<class T>
class Predicate
{
public:
    virtual bool operator () (T x) = 0;
};

template<class T>
class Zero : public Predicate<T>
{
public:
    virtual bool operator () (T x)
    {
        T zero = T();
        return x == zero;
    }
};

template<class T>
class Positive : public Predicate<T>
{
public:
    virtual bool operator () (T x)
    {
        return x > 0;
    }
};

template<class T>
class Negative : public Predicate<T>
{
public:
    virtual bool operator () (T x)
    {
        return x < 0;
    }
};

template<class T>
class Even : public Predicate<T>
{
public:
    virtual bool operator () (T x)
    {
        return x % 2 == 0;
    }
};

template<class T>
class Odd : public Predicate<T>
{
public:
    virtual bool operator () (T x)
    {
        return x % 2 != 0;
    }
};

template<class T>
int replace_copy(T* begin, T* end, T* to, const T& old_value, const T& new_value)
{
    int n = 0; 
    for (T* f = begin; f < end; f++) 
    { 
        *to = (*f == old_value) ? new_value : *f;
        to++;
        n++;
    }
    return n;
}

template<class T>
int replace_copy_if(T* begin, T* end, T* to, Predicate<T>& p, const T& new_value)
{
    int n = 0; 
    for (T* f = begin; f < end; f++)
    { 
        *to = p(*f) ? new_value : *f;
        to++; 
        n++;
    }
    return n;
}