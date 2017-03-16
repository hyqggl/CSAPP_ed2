//
// Created by huyiqing on 2017/3/16.
//

# include <iostream>

int is_little_endian()
{
    int a = 1;
    return *((char*)&a);
}

int main2_58()
{
    std::cout << is_little_endian();
    return 0;
}