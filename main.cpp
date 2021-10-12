#include <iostream>
#include "Etudiant.h"
#include "EtudiantCfai.h"

int main() {
    Etudiant e=Etudiant();
    EtudiantCfai ec=EtudiantCfai();
    e.etudier();
    ec.etudier();
    ((Etudiant)ec).etudier();
    return 0;
}
