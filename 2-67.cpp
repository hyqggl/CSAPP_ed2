//
// Created by huyiqing on 2017/3/16.
//

# include <iostream>


int int_size_is_32()
{
    int set_msb = 1 << 31;
    int beyond_msb = 1 << 31;
    beyond_msb = beyond_msb << 1;
    return set_msb && !beyond_msb;
 }

int main()
{
    std::cout << int_size_is_32();
    return 0;
}