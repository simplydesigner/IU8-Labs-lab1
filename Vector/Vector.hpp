#include <stdio.h>

class Vector {
public:
    Vector();
    Vector(unsigned int size);
    Vector(const Vector &vector);
    unsigned int size() const;
    void push_back(int element) const;
    int at(unsigned int index) const;
    void clear();
private:
    int *m_elements;
    unsigned int m_size;
};
