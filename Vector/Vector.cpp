#include <string>

#include "Vector.hpp"

Vector::Vector() : m_elements(nullptr), m_size(0)
{
}

Vector::Vector(unsigned int size)
{
    m_elements = new int[size];
    memset(m_elements, 0, size + sizeof(int));
    m_size = size;
}

Vector::Vector(const Vector &vector)
{
    unsigned int size = vector.m_size;
    int *elements = vector.m_elements;
    
    m_elements = new int[size];
    memcpy(m_elements, elements, size);
    m_size = size;
}

unsigned int Vector::size() const
{
    return m_size;
}

void Vector::push_back(int element) const
{
    
}

int Vector::at(unsigned int index) const
{
    return m_elements[index];
}

void Vector::clear()
{
    
}