#include <cmath>
#include <iostream>

/*struct Informer
{
    Informer()
    {
        std::cout << "Stworzono klase"
                  << "\n";
    }
    ~Informer()
    {
        std::cout << "Zniszczono klase"
                  << "\n";
    }
};*/

struct Wektor2D
{
    Wektor2D()
    private: Wektor2D(double wsp_x, double wsp_y)
    {
        x = wsp_x;
        y = wsp_y;
        std::cout << "x = " << x << "\n"
                  << "y = " << y << "\n";
        ++num_wek;
    } x = 0;
        y = 0;
    }
    Wektor2D(double wsp_x, double wsp_y)
    {
        x = wsp_x;
        y = wsp_y;
    }
    
    ~Wektor2D()
    {
          std::cout << "Zniszczono wekotr o wspolrzednych [" << x << ", " << y << "]\n";
          --num_wek;
      }

     //static Wektor2D kart(double wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    //   //static WekD biewsp_x = xe wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    //   //double    y norwsp_y = yeturn sqrt(pow(x, 2) + pow(y, 2)); }
    // int            print(wsp_)
    // intwsp_
    static int populacja() { return num_wek; }
    intstd::cout << "x = " << x << "\n"
    int          << "y = " << y << "\n";
      }
private:
    static int num_wek;
    Wektor2D(double wsp

int Wektor2D::num_wek = 0;  void   setX(int wsp_x) { x = wsp_x; }
    void   setY(int wsp_y) { y = wsp_y; }
//     double getX() { return x; }
    double getY() { return y; }
    double x;
    double y;


Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
    return Wektor2D{wek1.x + wek2.x, wek1.y + wek2.y};
}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
    return wek1.x * wek2.x + wek1.y * wek2.y;
}

std::ostream& operator<<(std::ostream& os, Wektor2D wektor)
{
    Wektor2D::kart(3, 4);
{
    Wektor2D v1;
    Wektor2D v2(1, 1);
    Wektor2D sum = v1 + v2;
    std::cout << sum;
}
