#include <iostream>
#include <locale.h>


class Figure  {
public:
    int get_quanfig() {
        return _quanfig;
    }
    std::string get_name() {
        return _name;
    }
    Figure(int quanfig_, std::string name_) {
        _quanfig = quanfig_;
        _name = name_;
    }
 
    Figure(){}
private:
    int _quanfig = 0;
    std::string _name = "Фигура: ";
};

class Triangle: public Figure {
public:
    Triangle() :Figure(3, "Треугольник: ") {
    }
};

class Square: public Figure {
public:
    Square() :Figure(4, "Четырёхугольник: "){
    }
};


int main()
{
    setlocale(LC_ALL, "Russian");
    Figure figure;
    Triangle triangle;
    Square square;
    std::cout << "Количество сторон:" << std::endl;
    std::cout << figure.get_name() << figure.get_quanfig() << std::endl;
    std::cout << triangle.get_name() << triangle.get_quanfig() << std::endl;
    std::cout << square.get_name() << square.get_quanfig() << std::endl;
}