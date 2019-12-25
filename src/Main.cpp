#include <iostream>

void Log(int a, int b);

int Multiply(int a, int b)
{
    return a * b;
}

void MultiplyAndLog(int a, int b)
{
    int result = Multiply(a, b);
    std::cout << result << std::endl;
}
int main()
{
    MultiplyAndLog(3,7);
    MultiplyAndLog(9,2);
    MultiplyAndLog(32,90);
    std::cin.get();
}
