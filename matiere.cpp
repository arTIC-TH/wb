


#include "matiere.hpp"

Matiere::Matiere(const std::string &i,int coef):intitule(i),coefficient(coef),note(0){};


std::string Matiere::getIntitule()const{
    return intitule;
   }

int Matiere::getCoefficient() const{
    return coefficient;
   }

   float Matiere::getNote() const{
    return note;
   }
void Matiere::setIntitule(const std::string &i){
  intitule=i;
}

void Matiere::setNote(float n){
 note=n;
}

void Matiere::setCoefficient(int c){
 coefficient=c;
}

void Matiere::afficher() const{
std::cout<<"intitule : "<<intitule<<" "<<"Coefficient : "<<coefficient<<" "<<"note : "<<note;
}
