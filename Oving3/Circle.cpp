const double pi = 3.141592;

class Circle {
public:
  // Circle skrevet med liten bokstav
  Circle(double radius_);
  // Areal burde være double
  double get_area() const;
  double get_circumference() const;
  // syntaks private datamedlemmer 'private: \n'
private:
  double radius;
}; // Manglet semikolon

// ==> Implementasjon av klassen Circle
// Skal ikke ha public, bytt om radius_ og radius
Circle::Circle(double radius_) : radius(radius_) {}

// manglet const
double Circle::get_area() const {
  return pi * radius * radius;
}

// manglet returtype
double Circle::get_circumference() const {
  double circumference = 2.0 * pi * radius;
  return circumference;
}
