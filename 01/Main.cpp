// W tym zadaniu Twoim celem jest zrozumienie, jak zorganizować program w języku C++ za pomocą systemu CMake, 
// który składa się z wielu plików źródłowych. Musisz stworzyć projekt, który kompiluje, linkuje i uruchamia 
// się poprawnie. Dodatkowo, zadanie 
// pozwoli Ci utrwalić podstawowe operacje związane z tworzeniem bibliotek i testowaniem programu.

// Cel ćwiczenia:

// Zrozumienie, jak w praktyce stosować CMake do organizacji projektu wieloplikowego, 
// w tym tworzenia bibliotek, oraz jak skonfigurować testy jednostkowe w C++.

// Wymagania:

//     Należy utworzyć plik math.h, który deklaruje funkcję add, oraz plik math.cpp, który zawiera implementację tej funkcji.
//     Należy utworzyć plik main.cpp, który wywołuje funkcję add i wyświetla wynik dodawania dwóch liczb.
//     Konfiguracja kompilacji musi pozwalać na tworzenie różnych trybów kompilacji oraz umożliwiać 


#include <iostream>
#include "math.h"

int main() {
    int x = 5;
    int y = 7;
    int result = add(x, y);

    std::cout << "Suma " << x << " i " << y << " to: " << result << std::endl;

    return 0;
}

// Spodziewany output:

//  Suma 5 i 7 to: 12.