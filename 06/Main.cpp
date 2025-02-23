// Celem zadania jest napisanie klasy `Circle`, która modeluje koło w przestrzeni 2D.

// 1. Klasa `Circle` przechowuje:
//    - Środek koła jako punkt w przestrzeni 2D (`Point2D`).
//    - Promień koła.

// 2. Punkt `Point2D`:
//    - Ma współrzędne `x` i `y`.
//    - Jest implementowany za pomocą `std::pair`. 
//    - Obsługuje operacje odczytu współrzędnych oraz wyświetlania.

// 3. Klasa `Circle`:
//    - Tworzenie obiektów:
//      - Musi uniemożliwiać utworzenie koła z ujemnym promieniem.
//      - Zapewniać możliwość tworzenia kół o domyślnym promieniu 1.0 oraz w punkcie (0,0).
//    - Operacje:
//      - Wylicza pole koła.
//      - Wylicza obwód koła. !!! !!!
//      - Pozwala na przesunięcie środka o zadaną wartość (parametry `dx`, `dy`).
//      - Obsługuje operacje porównywania dwóch kół (`==` dla porównania pól lub .isEqual(circle2)). 
//    - Wykorzystuje `this` do zwracania wskaźnika na aktualny obiekt przy metodach "łańcuchowych" (np. `translate(dx, dy)` zwraca referencję na obiekt, by można było wykonać kolejne operacje w tym samym wywołaniu).

// ---
// ---

// ### Zasady i ograniczenia

// 1. Plik `Main.cpp` pozostaje niezmieniony.
// 2. Program musi spełniać zasady D.R.Y. i być przyjazny programiście.
// 3. Konstruktor i metody powinny wykorzystywać listy inicjalizacyjne.
// 4. Metody `area`, `print` i inne nie modyfikujące stanu obiektu powinny być oznaczone jako `const`.


#include "Circle.h"

int main() {
    
    Circle circle1({0.0, 0.0}, 5.0);  // Koło w punkcie (0,0) z promieniem 5
    Circle circle2({3.0, 4.0}, 3.0);  // Koło w punkcie (3,4) z promieniem 3

    circle1.print();
    circle2.print();

    std::cout << "Pole koła 1: " << circle1.area() << std::endl;
    std::cout << "Pole koła 2: " << circle2.area() << std::endl;
    std::cout << "Pole koła 2: " << circle2.perimeter() << std::endl;

    circle1.translate(2.0, 3.0).translate(-1.0, -1.0);
    circle1.print();

    if (circle1 == circle2) {
    //if (circle1.isEqual(circle2)) {
        std::cout << "Koła są rowne." << std::endl;
    } else {
        std::cout << "Koła są rozne." << std::endl;
    }
    return 0;
}
// ```

// ---

// ### Wynik działania programu

// ```
// Circle: center(0, 0), radius=5
// Circle: center(3, 4), radius=3
// Pole koła 1: 78.5398
// Pole koła 2: 28.2743
// Circle: center(1, 2), radius=5
// Koła są różne.
// ```
