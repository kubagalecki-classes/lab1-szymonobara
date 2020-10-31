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
    {
    
    }
    Wektor2D(double wsp_x, double wsp_y)
    {
        x = wsp_x;
        y = wsp_y;
        std::cout << "x = " << x << "\n"
                  << "y = " << y << "\n";
    }

    // static Wektor2D kart(double wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    //   //static WekD biewsp_x = xe wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    //   //double    y norwsp_y = yeturn sqrt(pow(x, 2) + pow(y, 2)); }
    // int            print(wsp_)
    // intwsp_

    void setX(int wsp_x) { x = wsp_x; }
    void setY(int wsp_y) { y = wsp_y; }
    //     double getX() { return x; }
    double getY() { return y; }
    double x;
    double y;
};

Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
{
    return Wektor2D{wek1.x + wek2.x, wek1.y + wek2.y};
}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
    return wek1.x * wek2.x + wek1.y * wek2.y;
}

int main()
{

}
