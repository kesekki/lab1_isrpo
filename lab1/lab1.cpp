#include <iostream>
#include <cmath>
#include <vector>

class Triangle {
private:
    double sideA;
    double sideB;
    double angle;

public: Triangle(double a, double b, double ang) : sideA(a), sideB(b), angle(ang){}

      void printInfo() const {

      }
//увеличение угла в заданное количество раз
      void increaseAngle(double factor) {
          angle *= factor;
          //для избежания превышения 360 гр.
          if (angle >= 360) {
              angle = fmod(angle, 360);
          }
}
//уменьшение угла в заданное количество раз
      void decreaseAngle(double factor) {
          angle /= factor;
          //для того, чтобы угол не был отрицательным
          if (angle < 0) {
              angle = 0;
          }
      }
};

int main()
{
    std::vector<Triangle> triangles;
    int n; //количество теругольников, которое вводит пользователь
    std::cout << "Введите количество треугольников "; std::cin >> n;
    for (int i = 0; i < n; ++i) {
        double a, b, ang;
        std::cout << "Введите длины сторон и угол между ними в градусах" << i + 1 << ": ";
        std::cin >> a >> b >> ang;
        triangles.emplace_back(a, b, ang);
        std::cout << "Построены следующие треугольники: \n";
        for (auto& triangle : triangles) {
            triangle.
        }
    }
}
