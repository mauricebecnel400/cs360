#include "Square.h"
using namespace std;

Square::Square()
//default constructor
{
  side = 0;
}

Square::Square(const Square & s)
//copy constructor
{
  //this.setSide(s.getSide());
  side = s.side;
}

Square::~Square()
{

}

Square & Square::operator = (const Square & s) //overloaded assignment operator
{
  side = s.side;
  return * this;
  
}

float Square::getSide() const
{
  return side;

}

void Square::setSide(float s)
{
  side = s;
}


float Square::getArea() const
{
  return side * side;
}

float Square::getPerimeter() const
{
  return side * 4;
}

ostream & operator << (ostream & outs, const Square & s)
{
  outs << "A square with side length of " << s.getSide() << ", has a perimeter of ";
  outs << s.getPerimeter() << ", and an area of " << s.getArea() << "." << endl;
  return outs;
}

bool Square::operator == (Square other) const
{
  return side == other.side;
}

bool Square::operator != (const Square & other) const
{
  return side != other.side;
}








