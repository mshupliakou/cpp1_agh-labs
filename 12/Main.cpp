// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się,
// a wynik jego działania był zgodny z podanym na końcu tego pliku.
//
// Proszę zaimplementować:
// 1. Bazową klasę `Shape`:
//    - Zawiera pole `name`, które przechowuje nazwę kształtu.
//    - Zawiera metodę wirtualną `Area()`, która zwraca pole powierzchni.
// 2. Klasy pochodne:
//    - `Rectangle`:
//        - Pola: `width`, `height`.
//        - Implementuje metodę `Area()` (prostokąt: \( width \cdot height \)).
//        - Przeciąża operator `*` do skalowania wymiarów prostokąta.
//    - `Circle`:
//        - Pole: `radius`.
//        - Implementuje metodę `Area()` (koło: \( \pi \cdot radius^2 \)).
//        - Przeciąża operator `+`, który pozwala dodawać promienie dwóch kół
//          i zwraca nowe koło o powiększonym promieniu.
//
// Pliku `Main.cpp` nie wolno modyfikować.
//
// Ostateczny program powinien być czytelny, zgodny z zasadą D.R.Y.
// oraz odpowiednio zarządzać pamięcią.
//
// Przy wykonaniu zadania nie wolno korzystać z internetu, notatek,
// ani żadnych innych materiałów.
//
// Kody źródłowe muszą znajdować się w katalogu, do którego nikt oprócz
// właściciela nie ma praw dostępu. Rozwiązanie (czyli dodane pliki i Main.cpp)
// należy wgrać do UPEL jako archiwum tar.gz.
//
// UWAGA:
// * Archiwum powinno zawierać katalog z zadaniem, np. lab16/
// * Archiwum nie powinno zawierać katalogu build/

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <iostream>

int main() {
    
    Rectangle rect("Rectangle", 4, 5);
    Circle circle1("Circle1", 3);
    Circle circle2("Circle2", 2);

    // Wypisanie informacji o kształtach
    std::cout << rect << "\n";
    std::cout << circle1 << "\n";
    std::cout << circle2 << "\n";
 
    // Obliczanie pól powierzchni
    std::cout << "Area of rect: " << rect.Area() << "\n";
    std::cout << "Area of circle1: " << circle1.Area() << "\n";

    // Skalowanie prostokąta
    rect = rect * 2;
    std::cout << "Scaled rect: " << rect << "\n";
 // Dodawanie promieni kół
    Circle circle3 = circle1 + circle2;
    std::cout << "Combined circle: " << circle3 << "\n";
    return 0;
}

/* Wynik działania programu:
Rectangle (width: 4, height: 5)    Area: 20
Circle1 (radius: 3)    Area: 28.27
Circle2 (radius: 2)    Area: 12.57
Area of rect: 20
Area of circle1: 28.27
Scaled rect: Rectangle (width: 8, height: 10)    Area: 80
Combined circle: Circle (radius: 5)    Area: 78.54
Rectangle renamed to: Circle1
*/





