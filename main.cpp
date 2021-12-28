#include <iostream>
#include "LinkCircled.cpp"
#include "Book.h"

int main() {
    LinkCircled<Book>* list = new LinkCircled<Book>();

    list->addNodeFirst(Book("53","Cien años de Soledad","Gabo",783));
    list->addNodeFirst(Book("87","Juego de Tronos","George R.R. Martin",836));
    list->addNodeLast(Book("32","El Alquimista","Paulo Cohelo",320));
    //Insertar antes de de....
    list->addNodeBeforeTo(list->findNode("32"), Book("73","El Caliz de Fuego","J.K. Rowling",274));
    list->addNodeBeforeTo(list->findNode("87"), Book("29","El Señor de los Anillo","J.R.R Tolkien",1234));
    //Insertar después de....
    list->addNodeAfterTo(list->findNode("32"), Book("61","Choque de Reyes","George R.R. Martin",873));
    list->addNodeAfterTo(list->findNode("32"), Book("18","La Camara Secreta","J.K. Rowlin",391));

    std::string id = "3244";
    if( list->findNode( id ) != NULL ){
        std::cout<<"El Objeto Existe "<<std::endl;
    }else{
        std::cout<<"El Objeto NO Existe "<<std::endl;
    }


    //29 - 87 - 53 - 73 - 32 - 18 - 61
    for( Book book : list->getLinked()){
        std::cout<<book<<std::endl;
    }

    std::cout<<"Recorrer Lista a Partir de un Nodo........"<<std::endl;
    for( Book book : list->roamLinked( list->findNode("61"))){
        std::cout<<book<<std::endl;
    }


    delete(list);

    return EXIT_SUCCESS;
}
