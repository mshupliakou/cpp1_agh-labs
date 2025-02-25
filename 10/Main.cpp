/*
---------------------------------------------------------------------------------
                                 ŚWIĄTECZNE ZADANIE!!!!

Mikołaj przygotowuje prezenty dla studentów i musi zarządzać ich magazynem.
Twoim zadaniem jest uzupełnienie projektu poprzez implementację klas `Present` i
`Warehouse` w osobnych plikach w folderach `include` (nagłówki) i `src` (implementacja).

1. Struktura projektu:
   /project
      ├── /include
      │     ├── Present.h       <- Plik nagłówkowy klasy Present
      │     └── Warehouse.h     <- Plik nagłówkowy klasy Warehouse
      ├── /src
      │     ├── Present.cpp     <- Implementacja metod klasy Present
      │     └── Warehouse.cpp   <- Implementacja metod klasy Warehouse
      ├── Main.cpp              <- Plik główny (już napisany)
      └── CMakeLists.txt        <- (opcjonalnie) plik konfiguracyjny CMake

2. Klasa `Present` (plik `Present.h` i `Present.cpp`):
   Klasa ta reprezentuje pojedynczy prezent. Powinna zawierać:
   - Prywatne atrybuty:
       - `name` (nazwa prezentu, np. "Klocki LEGO").
       - `recipient` (imię dziecka, które otrzyma prezent).
   - Konstruktor:
       - `Present(const std::string& name, const std::string& recipient)`:
         inicjalizuje atrybuty `name` i `recipient`.
   - Metody:
       - `void describe() const`:
         wypisuje informacje o prezencie w formacie:
         "Prezent: [nazwa], dla: [imię dziecka]".
       - `std::string getRecipient() const`:
         zwraca imię dziecka, które ma otrzymać prezent.

3. Klasa `Warehouse` (plik `Warehouse.h` i `Warehouse.cpp`):
   Klasa ta reprezentuje magazyn prezentów. Powinna zawierać:
   - Prywatny atrybut:
       - `std::vector<Present> presents` - dynamiczna lista przechowująca obiekty `Present`.
   - Metody:
       - `void addPresent(const Present& present)`:
         Dodaje obiekt `Present` do wektora `presents`.
       - `void showAll() const`:
         Wyświetla wszystkie prezenty w magazynie, wywołując metodę `describe()` dla każdego.
       - `int countPresents() const`:
         Zwraca liczbę wszystkich prezentów w magazynie.
       - `void findByRecipient(const std::string& recipient) const`:
         Wypisuje wszystkie prezenty, które mają przypisanego danego odbiorcę (`recipient`).

4. Co należy zrobić:
   a) Utworzyć pliki `Present.h`, `Present.cpp`, `Warehouse.h`, `Warehouse.cpp`
      w odpowiednich folderach (`include` i `source`).
   b) Zaimplementować wymagane klasy zgodnie z powyższym opisem.
   c) Upewnić się, że projekt kompiluje się i działa poprawnie.
   d) Zapoznać się w domu z ideą korzystania z getterów i setterów w klasach w C++ - sformalizowany sposób na ustawianie zmiennych prywatnych.


Żródła:
std::string https://cplusplus.com/reference/string/string/
std::vector https://cplusplus.com/reference/vector/vector/

*/


#include "Present.h"
#include "Warehouse.h"
#include <iostream>

int main() {
    // Tworzymy kilka prezentów
    Present present1("Klocki LEGO", "Tomek");
    Present present2("Lalka Barbie", "Ania");
    Present present3("Pluszowy miś", "Tomek");

    // Tworzymy magazyn
    Warehouse warehouse;

    // Dodajemy prezenty do magazynu
    warehouse.addPresent(present1);
    warehouse.addPresent(present2);
    warehouse.addPresent(present3);

    // Wyświetlamy wszystkie prezenty
    std::cout << "Lista wszystkich prezentów:" << std::endl;
    warehouse.showAll();

    // Wyświetlamy liczbę prezentów
    std::cout << "\nLiczba prezentów: " << warehouse.countPresents() << std::endl;

    // Szukamy prezentów dla konkretnego dziecka
    std::string recipient = "Tomek";
    std::cout << "\nPrezenty dla " << recipient << ":" << std::endl;
    warehouse.findByRecipient(recipient);

    return 0;
}

/*
Oczekiwany wynik na konsoli:
Lista wszystkich prezentów:
Prezent: Klocki LEGO, dla: Tomek
Prezent: Lalka Barbie, dla: Ania
Prezent: Pluszowy miś, dla: Tomek

Liczba prezentów: 3

Prezenty dla Tomek:
Prezent: Klocki LEGO, dla: Tomek
Prezent: Pluszowy miś, dla: Tomek
---------------------------------------------------------------------------------
*/