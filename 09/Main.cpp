// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się
// a wynik jego działania był taki sam jak podany na końcu tego pliku
//
// Ostateczny program powinien być przyjazny dla programisty
// (mieć czytelny i dobrze napisany kod, bez powielania kodu - D.R.Y)
//
// Celem zadania jest implementacja klasy Rectangle, która:
// - zarządza dynamicznymi zasobami, przechowującymi wymiary prostokąta
//   (szerokość i wysokość jako dynamicznie alokowane zmienne typu double)
// - posiada konstruktor konwertujący z `std::pair<double, double>`
//   reprezentującego szerokość i wysokość prostokąta
// - posiada operator konwersji do `std::pair<double, double>`
//   zwracający parę szerokości i wysokości
// - wspiera operator konwersji do `double`, zwracający pole powierzchni prostokąta
// - zapewnia możliwość porównywania obiektów klasy Rectangle na podstawie ich pola
//
// UWAGA: Wywoływanie danego typu konstruktora, operatora lub metody można testować,
// implementując je jako "głośne".
//
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek ani innych materiałów.
// Plik Main.cpp nie powinien być zmieniany.

#include "Rectangle.h"

std::ostream& operator<<(std::ostream& os, const std::pair<double, double>& p){
     os<< "("<< p.first << "," << p.second << ")";
     return os;
}


int main() {
    // Tworzenie prostokąta za pomocą wymiarów
    Rectangle rect1(4.0, 5.0);
    std::cout << "Rectangle 1: " << std::pair<double, double>(rect1) << std::endl;

    // Tworzenie prostokąta z pary wymiarów
 
    Rectangle rect2 = std::make_pair(3.0, 6.0);
    std::cout << "Rectangle 2: " << std::pair<double, double>(rect2) << std::endl;

    // Porównanie prostokątów
    if (rect1 > rect2) {
        std::cout << "Rectangle 1 has a larger area than Rectangle 2" << std::endl;
    } else {
        std::cout << "Rectangle 2 has a larger or equal area compared to Rectangle 1" << std::endl;
    }

    // Obliczanie pola prostokąta za pomocą operatora double
    double area = rect1;
    std::cout << "Area of Rectangle 1: " << area << std::endl;

    return 0;
}

/* Wynik działania programu
Rectangle 1: (4.0, 5.0)
Rectangle 2: (3.0, 6.0)
Rectangle 1 has a larger area than Rectangle 2
Area of Rectangle 1: 20.0
*/