#include "Autobuffer.h"
#include <iostream>
#include <cstring>

int main()
{
    AutoBuffer buf(10); 
    strcpy(buf.data(), "Hello");
    std::cout << buf.data() << std::endl; // Powinno wyświetlić "Hello"
}