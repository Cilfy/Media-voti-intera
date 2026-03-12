// Media voti di una classe
#include <stdio.h>

int main( void )
{
    unsigned int counter; // contatore
    int grade; // valore del voto
    int total; // somma dei voti
    int average; // media dei voti
    
    // fase di inizializzazione
    total = 0; // inizializza il totale
    counter = 1; // inizializza il contatore
    
    // fase di elaborazione
    while ( counter <= 10 ) { // inserisci voto 10 volte 
        printf( "%s", "Enter grade: ") ; // prompt
        scanf( "%d", &grade ) ; // leggi il voto
        total = total + grade; // somma
        counter = counter + 1; // incrementa
} // fine while
    
    // fase di terminazione
    average = total / 10; // divisione reinterpret_cast
    
    // stampa il risultato
    printf( "Class average is %d\n", average );

    return 0;
} // fine della funzione main
