#include <iostream>
#include <vector>

void sym()
{
    std::cout << "<============>" << "\n";
}
void minus();
void plus();
void mul();
void div();

int main()
{
    sym();
    std::string op;
    std::cout << "+ - x : e\n:";
    std::cin >> op;
    sym();
    if (op == "+")
    {
        plus();
    }
    else if (op == "-")
    {
        minus();
    }
    else if (op == "x" || op == "*")
    {
        mul();
    }
    else if (op == "/" || op == ":")
    {
        div();
    }
    else if (op == "e")
    {
        exit(0);
    }
    else
    {
        main();
    }
}
void minus()
{
    std::vector<double> number{};
    int start;
    std::cout << "Co bao nhieu so can tinh ? :";
    std::cin >> start;
    if (start <= 0)
    {
        start = 1;
    }

    sym();
    double nums;
    for (int i = 1; i <= start; i++)
    {
        std::cout << "Nhap so thu " << i << ":";
        std::cin >> nums;
        number.push_back(nums);
    }
    double sub = number[0];
    for (int i = 1; i < number.size(); ++i)
    {
        sub -= number[i];
    }
    std::cout << "KQ:" << sub << "\n";
    main();
}
void plus()
{
    std::vector<double> number{};
    int start;
    std::cout << "Co bao nhieu so can tinh ?:";
    std::cin >> start;
    if (start <= 0)
    {
        start = 1;
    }
    sym();
    double nums;
    for (int i = 1; i <= start; i++)
    {
        std::cout << "Nhap so thu " << i << ":";
        std::cin >> nums;
        number.push_back(nums);
    }
    double sum = number[0];
    for (int i = 1; i < number.size(); ++i)
    {
        sum += number[i];
    }
    std::cout << "KQ:" << sum << "\n";
    main();
}
void mul()
{
    std::vector<double> number{};
    int start;
    std::cout << "Co bao nhieu so can tinh ?:";
    std::cin >> start;
    if (start <= 0)
    {
        start = 1;
    }
    sym();
    double nums;
    for (int i = 1; i <= start; i++)
    {
        std::cout << "Nhap so thu " << i << ":";
        std::cin >> nums;
        number.push_back(nums);
    }
    double sub = number[0];
    for (int i = 1; i < number.size(); ++i)
    {
        sub *= number[i];
    }
    std::cout << "KQ:" << sub << "\n";
    main();
}
void div()
{
    std::vector<double> number{};
    int start;
    std::cout << "Co bao nhieu so can tinh ?:";
    std::cin >> start;
    if (start <= 0)
    {
        start = 1;
    }
    sym();
    double nums;
    for (int i = 1; i <= start; i++)
    {
        std::cout << "Nhap so thu " << i << ":";
        std::cin >> nums;
        number.push_back(nums);
    }
    double sum = number[0];
    for (int i = 1; i < number.size(); ++i)
    {
        sum /= number[i];
    }
    std::cout << "KQ:" << sum << "\n";
    main();
}