class Wektor2D
{
  Wektor2D() {x=0; y=0;}

  Wektor2D(double wsp_x, double wsp_y)
    {
      x=wsp_x;
      y=wsp_y;
    }
  double x;
  double y;
  double getX(){return x;}
  double getY(){return y;}
  void setX(double wsp_x) {x = wsp_x;}
  void setY(double wsp_y) {y = wsp_y;}
  
};

Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
  return Wektor2D{wek1.x + wek2.x, wek1.y + wek2.y};
}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
  return wek1.x * wek2.x + wek1.y * wek2.y;
}
