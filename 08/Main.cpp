// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się,
// a wynik jego działania był taki sam jak podany na końcu tego pliku.
//
// Ostateczny program powinien być przyjazny dla programisty
// (mieć czytelny i dobrze napisany kod, bez powielania kodu - D.R.Y).
//
// Celem zadania jest napisanie klas Pokemon oraz Trainer, które odpowiednio:
//     Klasa Pokemon przechowuje informacje o nazwie, typie i poziomie doświadczenia Pokémonów.
//         zobacz: https://en.cppreference.com/w/cpp/language/copy_constructor
//     Klasa Trainer zarządza drużyną Pokémonów przy użyciu wskaźników i dynamicznej pamięci.
//         zobacz: https://en.cppreference.com/w/cpp/container/vector
//
// Szczegółowe wymagania dla klasy Pokemon:
//     1. Konstruktor z delegacją:
//         - Konstruktor przyjmujący nazwę, typ i poziom Pokémona powinien używać listy inicjalizacyjnej.*
//         - Konstruktor domyślny deleguje do pełnego konstruktora z domyślnymi wartościami ("Unknown", "Normal", 1).*
//     2. Konstruktor kopiujący:
//         - Klasa powinna umożliwiać kopiowanie obiektów.*
//         - Kopiowanie powinno wypisywać komunikat o stworzeniu kopii (np. "[Pokemon Copy Constructor] Copied Pikachu").*
//     3. Destruktor:
//         - Klasa powinna posiadać destruktor wypisujący komunikat o zniszczeniu obiektu (np. "[Pokemon Destructor] Destroyed Pikachu").*
//     4. "Nazwane" konstruktory:*
//         - Statyczne metody do tworzenia Pokémonów o określonych typach:
//             static Pokemon* createElectricPokemon(const std::string& name, int level);
//             static Pokemon* createFirePokemon(const std::string& name, int level);
//         - Funkcje te powinny tworzyć i zwracać wskaźniki na nowo utworzone obiekty.
//     5. Metoda display():
//         - Wyświetla informacje o Pokémonie w formacie:
//             Pikachu (Type: Electric, Level: 5)
//
// Szczegółowe wymagania dla klasy Trainer:
//     1. Konstruktor:
//         - Tworzy obiekt z określoną nazwą trenera i wypisuje komunikat o jego stworzeniu.*
//     2. Konstruktor kopiujący:
//         - Kopiuje nazwę trenera oraz kopiuje wszystkie Pokémony w drużynie, alokując nową pamięć.*
//         - Wypisuje komunikat o skopiowaniu trenera (np. "[Trainer Copy Constructor] Trainer Ash Ketchum copied.").*
//     3. Destruktor:*
//         - Wypisuje komunikat o zniszczeniu obiektu trenera (np. "[Trainer Destructor] Trainer Ash Ketchum destroyed.").
//         - Zwolnienie pamięci dla Pokémonów w drużynie.
//     4. Metoda addPokemon:
//         - Dodaje wskaźnik do Pokémona (`Pokemon*`) do drużyny.*
//     5. Metoda displayTeam:
//         - Wyświetla wszystkie Pokémony w drużynie, korzystając z ich metod display().*
//          
//         To się wam w kilku miejscach przyda!!!
//         (for (const Klasa* obiekt : wektor_obiektów){ obiekt->metoda_obiektu(); })  !!!!!!!!!! 
//
// Dodatkowe wymagania:
//     - W programie należy zwrócić szczególną uwagę na poprawność kopiowania obiektów:
//         * Po utworzeniu kopii trenera, dodanie nowych Pokémonów do kopii nie może wpływać na drużynę oryginalnego trenera.
//         * Należy zadbać, aby obie drużyny były od siebie niezależne.
//     - Zarządzanie pamięcią: Korzystamy z dynamicznej alokacji pamięci (`new` i `delete`).
//     - Kod powinien demonstrować wyraźne komunikaty podczas tworzenia, kopiowania i niszczenia obiektów.
//     - Kod powinien być rozdzielony na pliki źródłowe:
//         * Pokemon.h, Pokemon.cpp
//         * Trainer.h, Trainer.cpp
//         * Main.cpp (niezmienny w rozwiązaniu)
//
// UWAGA: 
//     Po zajęciach możesz samodzielnie zbadać, czym jest std::shared_ptr (https://en.cppreference.com/w/cpp/memory/shared_ptr)
//     i spróbować przerobić zadanie tak, aby używać wskaźników współdzielonych zamiast klasycznych wskaźników.
//     Dzięki std::shared_ptr zarządzanie pamięcią może stać się prostsze i bardziej automatyczne.
//
// W zadaniu nie wolno korzystać z internetu z wyjątkiem linków podanych powyżej,
// notatek, ani żadnych innych materiałów (w tym własnych wcześniej przygotowanych plików 
// oprócz CMakeLists.txt, chyba że polecenie stanowi inaczej).
//
// Kody źródłowe muszą znajdować się w katalogu, do którego nikt oprócz właściciela nie ma praw dostępu.
// Rozwiązanie (czyli katalog z plikami i Main.cpp) należy wgrać do UPEL jako archiwum tar.gz.
// UWAGA:
// * Plik Main.cpp w końcowym rozwiązaniu powinien być niezmieniony.
// * Archiwum tar.gz nie powinno zawierać katalogu build/.
// * Brak wysłanego rozwiązania (bez względu na jego ukończenie) jest tożsame z brakiem obecności na zajęciach.



#include "Trainer.h"
#include "Pokemon.h"
#include <iostream>

int main() {
    
    // Tworzenie Pokémonów
    Pokemon* pikachu = Pokemon::createElectricPokemon("Pikachu", 5);
    Pokemon* charizard = Pokemon::createFirePokemon("Charizard", 10);
    Pokemon* eevee = Pokemon::createElectricPokemon("Eevee", 7);

    // Tworzenie trenera
    Trainer ash("Ash Ketchum");
    ash.addPokemon(pikachu);
    ash.addPokemon(charizard);

    std::cout << "Ash's initial team:" << std::endl;
    ash.displayTeam();

    // Kopiowanie trenera
    Trainer copiedAsh = ash;
    std::cout << "\nCopied Ash's team (before modification):" << std::endl;
    copiedAsh.displayTeam();

    // Modyfikacja drużyny skopiowanego trenera
    copiedAsh.addPokemon(eevee);
    std::cout << "\nCopied Ash's team (after adding Eevee):" << std::endl;
    copiedAsh.displayTeam();

     
    std::cout << "\nAsh's team (unchanged):" << std::endl;
    ash.displayTeam();

    // Zwolnienie pamięci
    //  delete pikachu;
    //  delete charizard;
    //  delete eevee;

    return 0;
}




// [Pokemon Constructor] Created Pikachu (Type: Electric, Level: 5)
// [Pokemon Constructor] Created Charizard (Type: Fire, Level: 10)
// [Trainer Constructor] Trainer Ash Ketchum created.

// Ash's initial team:
// Pikachu (Type: Electric, Level: 5)
// Charizard (Type: Fire, Level: 10)

// [Pokemon Copy Constructor] Copied Pikachu
// [Pokemon Copy Constructor] Copied Charizard
// [Trainer Copy Constructor] Trainer Ash Ketchum copied.

// Copied Ash's team (before modification):
// Pikachu (Type: Electric, Level: 5)
// Charizard (Type: Fire, Level: 10)

// [Pokemon Constructor] Created Eevee (Type: Electric, Level: 7)

// Copied Ash's team (after adding Eevee):
// Pikachu (Type: Electric, Level: 5)
// Charizard (Type: Fire, Level: 10)
// Eevee (Type: Electric, Level: 7)

// Ash's team (unchanged):
// Pikachu (Type: Electric, Level: 5)
// Charizard (Type: Fire, Level: 10)

// [Trainer Destructor] Trainer Ash Ketchum destroyed.
// [Pokemon Destructor] Destroyed Charizard
// [Pokemon Destructor] Destroyed Pikachu
// [Trainer Destructor] Trainer Ash Ketchum destroyed.
// [Pokemon Destructor] Destroyed Eevee
// [Pokemon Destructor] Destroyed Charizard
// [Pokemon Destructor] Destroyed Pikachu