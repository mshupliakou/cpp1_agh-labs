// Proszę dopisać kod, dodać nowe pliki, tak aby program wykonywał się, a wynik jego działania był taki sam jak podany na końcu tego pliku.

// Ostateczny program powinien być przyjazny dla programisty
// (mieć czytelny i dobrze napisany kod, bez powielania kodu - D.R.Y).

// Celem zadania jest napisanie klas Student, Group, oraz University, które odpowiednio:

// zobacz: https://en.cppreference.com/w/cpp/container/array
// zobacz: https://en.cppreference.com/w/cpp/container/vector

// Dodatkowe wymagania:

//     Funkcje typu const i nie const jednocześnie:
//  

//     Konstruktor domniemany, domyślny i trywialny:
//         Wszystkie klasy korzystają z odpowiednich konstruktorów w zależności od potrzeb.
//    

// Dodatkowe elementy w programie:

// // // // // // ClassB(const ClassA& objA) Was is das? 

#include "University.h" // Zawiera definicje Student, Group, University

int main() {
    // Tworzenie studenta
    
    Student myStudent("John", "Doe", 2020);
    myStudent.display();
    std::cout << std::endl;

    // Tworzenie grupy
    Group myGroup("Computer Science 2020");
     myGroup.addStudent(Student("Alice", "Smith", 2020)); 
     myGroup.addStudent(Student("Bob", "Brown", 2019));
     myGroup.addStudent(myStudent);

    // Wyświetlanie studentów w grupie
    std::cout << "Students in group: " << myGroup.getName() << std::endl;
    myGroup.displayStudents();

    // Tworzenie uczelni i dodawanie grup
    University myUniversity;
    myUniversity.addGroup(myGroup);
    myUniversity.addGroup(Group("Physics 2021"));
    // Wyświetlanie liczby studentów na uczelni
    std::cout << "\nTotal students at the university: " << myUniversity.totalStudents() << std::endl;

    return 0;
}

/* Oczekiwany wynik:
John Doe (2020)

Students in group: Computer Science 2020
Alice Smith (2020)
Bob Brown (2019)
John Doe (2020)

Total students at the university: 3
 */