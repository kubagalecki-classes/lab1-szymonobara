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
    Wektor2D() {}

    ~Wektor2D()
    {
        std::cout << "Zniszczono wekotr o wspolrzednych [" << x << ", " << y << "]\n";
        --num_wek;
    }

    // Informer Informer1;
    static Wektor2D kart(double wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    static Wektor2D bieg(double wsp_x, double wsp_y) { return Wektor2D(wsp_x, wsp_y); }
    double          norm() { return sqrt(pow(x, 2) + pow(y, 2)); }
    void            print()
    {
        std::cout << "x = " << x << "\n"
                  << "y = " << y << "\n";
    }
    void setX(int x) { wsp_x = x; }
    void setY(int y) { wsp_y = y; }
    int  getX() { return wsp_x; }
    int  getY() { return wsp_y; }
    static int populacja() { return num_wek; }
    int        x;
    int        y;

private:
    static int num_wek;
    Wektor2D(double wsp_x, double wsp_y)
    {
        x = wsp_x;
        y = wsp_y;
        std::cout << "x = " << x << "\n"
                  << "y = " << y << "\n";
        ++num_wek;
    }
};

int Wektor2D::num_wek = 0;

// Wektor2D operator+(Wektor2D wek1, Wektor2D wek2)
//{
//    return Wektor2D{wek1.x + wek2.x, wek1.y + wek2.y};
//}

double operator*(Wektor2D wek1, Wektor2D wek2)
{
    return wek1.x * wek2.x + wek1.y * wek2.y;
}

std::ostream& operator<<(std::ostream& os, Wektor2D wektor)
{
    os << "[" << wektor.x << ", " << wektor.y << "]\n";
    return os;
}

int main()
{
    Wektor2D::kart(3, 4);
}
