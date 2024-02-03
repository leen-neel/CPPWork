#include <iostream>

int main()
{

    int i = 1;

    while (i <= 10)
    {
        std::cout << i << std::endl;
        i++;
    }

    std::cout << "\n----------------\n";
    std::cout
        << "For Loop\n\n";

    for (i = 1; i <= 10; i++)
    {
        std::cout << i << std::endl;
    }
}
