#include "Triangle.h"
#include "Figure.h"
#include "MyException.h"


std::string Figure::getNameOfFigure() { return nameOfFigure_; }
int Figure::getHaveFourSides() { return haveFourSides_; }

int Figure::getSideLengthA() { return sideLengthA_; }
int Figure::getSideLengthB() { return sideLengthB_; }
int Figure::getSideLengthC() { return sideLengthC_; }
int Figure::getSideLengthD() { return sideLengthD_; }

int Figure::getAngleA() { return angleA_; }
int Figure::getAngleB() { return angleB_; }
int Figure::getAngleC() { return angleC_; }
int Figure::getAngleD() { return angleD_; }