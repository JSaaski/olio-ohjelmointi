#include "student.h"

#include <iostream>

using namespace std;
//esimerkki Student luokasta, jolla
//private tyyppiset jäsenmuuttujat fname, lname
//ja niille public tyyppiset Getter ja Setter metodit
//sekä public tyyppinen metodi studentInfo, joka tulostaa
//tiedot

int main()
{
    //luodaan Student luokastaolio pinoon
    Student objectStudent1;
    objectStudent1.setFname("Teppo");
    objectStudent1.setLname("Testi");
    objectStudent1.studentInfo();

    return 0;
}

