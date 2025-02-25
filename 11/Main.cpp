// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się,
// a wynik jego działania był zgodny z podanym na końcu tego pliku.
//
// Proszę zaimplementować klasy:
// 1. `Line` – reprezentuje linię według matematycznego równania:
//    y = a * x + b, oraz pozwala na:
//    - Wyliczanie wartości operatorem ().
//    - Wyznaczanie punktu przecięcia z osią odciętych (x'ów) wg równania:
//      x0 = -b / a.
// 2. `LCollection` – dynamiczna kolekcja obiektów klasy `Line`:
//    - Powinna umożliwiać dynamiczne dodawanie nowych elementów.
//    - Powinna obsługiwać sortowanie linii według ich współczynnika `a`.
// 3. `LTransform` – funkcjonalny obiekt (funktor), który modyfikuje linie
//    według podanej operacji. Przykład: przesunięcie wszystkich linii
//    w górę o wartość `d`.
//
// UWAGA!!! DZISIEJSZE ZADANIE BĘDZIE PODSTAWĄ ZADANIA W PRZYSZŁYM TYGODNIU!!!
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
// * Archiwum powinno zawierać katalog z zadaniem, np. lab10/
// * Archiwum nie powinno zawierać katalogu build/

#include "Line.h"
#include "LCollection.h"
#include "LTransform.h"
#include <vector>
#include <algorithm>

int main()
{
    
    Line fa(1, 1); // y = 1*x + 1
    std::cout << fa << "\n";

    LCollection collection;
  
    collection.Add(fa);
    collection.Add(Line(2, 2));
    collection.Add(Line(3, 3));
 
    std::cout << "Before sorting:\n";
    collection.Print();
 
    collection.Sort(); // Sortowanie według współczynnika `a`.

    std::cout << "After sorting:\n";
    collection.Print();

    // Przesunięcie wszystkich linii w górę o 5 jednostek.
    LTransform transform(5);
    collection.Transform(transform);

    std::cout << "After transformation:\n";
    collection.Print();

    return 0;
}

/* Wynik działania programu:
y = 1* x + 1    x0 = -1
Before sorting:
[0] y = 1* x + 1    x0 = -1
[1] y = 2* x + 2    x0 = -1
[2] y = 3* x + 3    x0 = -1
After sorting:
[0] y = 1* x + 1    x0 = -1
[1] y = 2* x + 2    x0 = -1
[2] y = 3* x + 3    x0 = -1
After transformation:
[0] y = 1* x + 6    x0 = -6
[1] y = 2* x + 7    x0 = -3.5
[2] y = 3* x + 8    x0 = -2.66667
*/
