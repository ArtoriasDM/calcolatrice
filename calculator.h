#include <iostream>

class calculator
{
private:
    double a;
    double b;
    char  op;
public:
    calculator();
    ~calculator();
    void setFirst();
    void setLast();
    void chooseOperation();
    void calculateResult();
};

void calculator::setFirst()
{
    double a;
    std::cin >> a;
    this->a = a;
}

void calculator::setLast()
{
    double b;
    std::cin >> b;
    this->b = b;
}

void calculator::chooseOperation() 
{
    char op;
    std::cin >> op;
    this->op = op;
}

void calculator::calculateResult()
{
    switch (this->op)
    {
    case '+':
        std::cout << a << "+" << b << "=" << a + b << std::endl;
        break;
    
    case '-':
        std::cout << a << "-" << b << "=" << a - b << std::endl;
        break;

    case 'x':
        std::cout << a << "x" << b << "=" << a * b << std::endl;
        break;

    case ':':
        if (b != 0)
        {
            std::cout << a << ":" << b << "=" << a / b << std::endl;  
        }
        else
        {
            std::cout << "ERROR" << std::endl;
        }
        break;
        
    default:
        std::cout << "ERROR" << std::endl;
        break;
    }
}
