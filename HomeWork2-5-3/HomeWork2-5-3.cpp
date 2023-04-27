#include <iostream>

class Figure {
public:
    virtual void printInfo() {
        std::cout << "Фигура: " << std::endl;
    }
    virtual bool isRegular() {
        return true;
    }
};
class Triangle : public Figure {
private:
    int side1, side2, side3;
    int angle1, angle2, angle3;
public:
    Triangle () {}
    Triangle(int s1, int s2, int s3, int a1, int a2, int a3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
    }
    void printInfo() {
        std::cout << "Треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << std::endl;
    }
    bool isRegular()  {
        return (angle1 + angle2 + angle3 == 180);
    }
};
class RightTriangle : public Triangle {
private:
    int side1, side2, side3;
    int angle1, angle2, angle3;
public:
    RightTriangle(int s1, int s2, int s3, int a1, int a2, int a3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
    }
    void printInfo() {
        std::cout << "Прямоугольный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << std::endl;
    }
    bool isRegular() {
        return (angle3 == 90);
    }  
};
class IsoscelesTriangle : public Triangle {
private:
    int side1, side2, side3;
    int angle1, angle2, angle3;
public:
    IsoscelesTriangle(int s1, int s2, int s3, int a1, int a2, int a3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
    }
    void printInfo() {
        std::cout << "Равнобедренный треугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << std::endl;
    }
    bool isRegular() {
        return (angle1 == angle3 && side1 == side3);
    }

};
class EquilateralTriangle : public Triangle {
private:
    int side1, side2, side3;
    int angle1, angle2, angle3;
public:
    EquilateralTriangle(int s1, int s2, int s3, int a1, int a2, int a3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
    }
    void printInfo() {
        std::cout << "Равносторонний треугольник: " << std::endl;
        std::cout << "Стороны: " << " a = " << side1 << " b = " << side2 << " c = " << side3 << std::endl;
        std::cout << "Углы: " << " A = " << angle1 << " B = " << angle2 << " C = " << angle3 << std::endl;
    }
    bool isRegular() {
        return ((side1 == side2 && side2 == side3) && (angle1 == angle2 && angle2 == angle3));
    }

};
class Quadrilateral : public Figure {
private:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Quadrilateral() {}
    Quadrilateral(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
        angle4 = a4;
    }
    void printInfo() {
        std::cout << "Четырёхугольник: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
    }
    bool isRegular() {
        return (angle1 + angle2 + angle3 + angle4 == 360);
    }
};
class Rectangle : public Quadrilateral {
private:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Rectangle(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
        angle4 = a4;
    }
    void printInfo() {
        std::cout << "Прямоугольник" << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
    }
    bool isRegular() {
        return (side1 == side3 && side2 == side4 && angle1 == 90 && angle2 == 90 && angle3 == 90 && angle4 == 90);
    }
};
class Square : public Quadrilateral {
private:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Square(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
        angle4 = a4;
    }
    void printInfo() {
        std::cout << "Квадрат" << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
    }
    bool isRegular() {
        return (side1 == side2 && side2 ==  side3 && side3 == side4 && angle1 == 90 && angle2 == 90 && angle3 == 90 && angle4 == 90);
    }
};
class Parallelogram : public Quadrilateral {
private:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Parallelogram(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
        angle4 = a4;
    }
    void printInfo() {
        std::cout << "Параллелограм: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
    }
    bool isRegular() {
        return (side1 == side3 && side2 == side4 && angle1 == angle3 && angle2 == angle4);
    }
};
class Rhombus : public Quadrilateral {
private:
    int side1, side2, side3, side4;
    int angle1, angle2, angle3, angle4;
public:
    Rhombus(int s1, int s2, int s3, int s4, int a1, int a2, int a3, int a4) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        side4 = s4;
        angle1 = a1;
        angle2 = a2;
        angle3 = a3;
        angle4 = a4;
    }
    void printInfo() {
        std::cout << "Ромб: " << std::endl;
        std::cout << "Стороны: " << "a = " << side1 << " b = " << side2 << " c = " << side3 << " d = " << side4 << std::endl;
        std::cout << "Углы: " << "A = " << angle1 << " B = " << angle2 << " C = " << angle3 << " D = " << angle4 << std::endl;
    }
    bool isRegular() {
        return (side1 == side2 && side2 == side3 && side3 == side4 && angle1 == angle3 && angle2 == angle4);
    }
};
int main() {
    setlocale(LC_ALL, "Rus");
    Figure* figure[10];
    figure[0] = new Figure();
    figure[1] = new Triangle(10, 20, 30, 50, 60, 70);
    figure[2] = new RightTriangle(10, 20, 30, 50, 60, 90);
    figure[3] = new IsoscelesTriangle(10, 20, 10, 50, 60, 50);
    figure[4] = new EquilateralTriangle(30, 30, 30, 60, 60, 60);
    figure[5] = new Quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
    figure[6] = new Rectangle(10, 20, 10, 20, 90, 90, 90, 90);
    figure[7] = new Square(20, 20, 20, 20, 90, 90, 90, 90);
    figure[8] = new Parallelogram(20, 30, 20, 30, 30, 40, 30, 40);
    figure[9] = new Rhombus(30, 30, 30, 30, 30, 40, 30, 40);
    for (int i = 0; i < 10; i++) {
        figure[i]->printInfo();
        if (figure[i]->isRegular()) {
            std::cout << "Правильная" << std::endl;
        }
        else {
            std::cout << "Неправильная" << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}