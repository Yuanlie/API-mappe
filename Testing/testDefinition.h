#ifndef TESTDEFINITIONEN_H
#define TESTDEFINITIONEN_H

#ifdef TEST

#include "test.h"



void test()
{
    
    //double timing;Diese Zeit ist der Wert von Funktion millis() beim Stoppen des Programm.
    double time = 60000;//Diese 60000ms ist der Zwerk,dass millis() beim Stoppen des Programm wirklich 60000ms läuft.

    
    bool testResult = false;
    if(time-timing=<100&timing-time=<100)
    {
        testResult = true;
    }
    else
    {
        testResult = false;
    }
    
    
    APITest::printTestResult(testResult,
                             "Die Kontrolle des Programms",
                             "Lie Yuan",
                             "Prototyp A03, Pruefung die Genauigkeit der Funktion millis()",
                             "testDefinitionen.h");
}


void runTests(){
    APITest::printTestStartHeader(); // Nicht modifizieren
    
       test();
    
    APITest::printTestEndFooter(); // Nicht modifizieren
}
#endif //TEST

#ifdef TEST  // Nicht modifizieren
#define RUNTEST runTests();
#else
#define RUNTEST
#endif


#endif //TESTDEFINITIONEN_H
