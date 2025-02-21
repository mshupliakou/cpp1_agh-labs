// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal się
// a wynik jego dzialania byl taki sam jak podany na końcu tego pliku
//
// Ostateczny program powinien byc przyjazny dla programisty (miec czytelny 
// i dobrze napisany kod, bez powielania kodu - D.R.Y)

// UWAGA: W tym zadaniu należy POPEŁNIAĆ ŚWIADOME BŁĘDY związane z zarządzaniem pamięci;
// Warunkiem zadania jest implementacja poprawnych oraz błednych instrukcji z tym zwiazanych
// -> każdy "case" proszę odpowiednio pokryć odpowiednim komentarzem w kodzie źródłowym,
// oznaczając kolejne miejsca wystąpienia błedu jako: [BUG] 

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani żadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile, chyba że polecenie stanowi inaczej)
//
// Kody źródłowe muszą znajdować się w katalogu do którego nikt oprócz
// właściciela nie ma praw dostępu.
// Rozwiazanie (czyli katalog z plikami i Main.cpp należy wgrać do UPEL jako archiwum tar.gz
// UWAGA:
// * pliku Main.cpp wyjątkowo może być zmieniony (Dużo różnych błędów można popełnić - proszę się wykazać - można dodać ich parę)
// * archiwum tar.gz nie powinno zawierać katalogu build/
// * brak wysłanego rozwiązania (bez względu na jego ukończenie),
//   jest tożsame z brakiem obecności na zajęciach.
// Przykłądowe błędy:
// Memory Leaks
// Double Free
// Use After Free
// Uninitialized Variable
// Dostęp poza zakresem tablicy
// Dereferencing Null Pointer
// Race condition (Wymaga wielowątkowości! jeszcze nie dla was)
// Segmentation Fault
// Nieskończona pętla
// // Destruction Order

//// tar -czvf lab01.tar.gz cpp_lessons/
#include "bugs.h"
int main() {
    std::cout << "Starting program with intentional bugs..." << std::endl;

    // Wywołaj różne funkcje, które zawierają błędy
    memoryLeak();
    doubleFree();
    useAfterFree();
    uninitializedVariable();
    outOfBounds();
    segmentationFault(); // Zakomentowane, aby nie przerwało działania programu
    infiniteLoop(); // Zakomentowane, aby nie zawiesiło programu
    aliasingProblem(); // Zakomentowane, bo nie wiem czy wiecie czym jest

    std::cout << "End of buggy program..." << std::endl;
    return 0;
}


// Spodziewany output:

/* Starting program with intentional bugs...

 Here some bugs descriptions - in program U should have 2 wersion - with bud and without - U can add some output. 

 End of buggy program...

 
*/