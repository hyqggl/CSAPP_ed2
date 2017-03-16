#include <iostream>

int show_short(short& obj)
{
    char* xx = (char*)&obj;
    for(int i = 0; i < sizeof(obj); ++i)
    printf("%02x ", xx[i]);
}

int show_long(long& obj)
{
    char* xx = (char*)&obj;
    for(int i = 0; i < sizeof(obj); ++i)
        printf("%02x ", xx[i]);
}

int show_int(int& obj)
{
    char* xx = (char*)&obj;
    for(int i = 0; i < sizeof(obj); ++i)
        printf("%02x ", xx[i]);
}

int show_double(double& obj)
{
    char* xx = (char*)&obj;
    for(int i = 0; i < sizeof(obj); ++i)
        printf("%02x ", xx[i]);
}

int main2_57() {
    short x = 12;
    int y = 12;
    long z = 12;
    double zx = 12.0;
    show_short(x);
    std::cout << std::endl;
    show_int(y);
    std::cout << std::endl;
    show_long(z);
    std::cout << std::endl;
    show_double(zx);
    std::cout << std::endl;
    return 0;
}