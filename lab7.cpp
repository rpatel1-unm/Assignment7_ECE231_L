#include <iostream>
#include <cmath>
using namespace std;

class Electric_Field
{
  private:
    double *E;
  public:
    Electric_Field()
    {
        E = new double[3];
        E[0] = 0;
        E[1] = 0;
        E[2] = 0;
    }

    Electric_Field(double x, double y, double z)
    {
        E = new double[3];
        E[0] = x;
        E[1] = y;
        E[2] = z;
    }

    ~Electric_Field()
    {
        delete[] E;
    }

    double getX() { return E[0]; }
    double getY() { return E[1]; }
    double getZ() { return E[2]; }

    void setX(double x) { E[0] = x; }
    void setY(double y) { E[1] = y; }
    void setZ(double z) { E[2] = z; }

    double calculateMagnitude()
    {
        return sqrt(E[0]*E[0] + E[1]*E[1] + E[2]*E[2]);
    }

    double calculateInnerProduct()
    {
        return E[0]*E[0] + E[1]*E[1] + E[2]*E[2];
    }
};

class Magnetic_Field
{
  private:
    double *B;
  public:
    Magnetic_Field()
    {
        B = new double[3];
        B[0] = 0;
        B[1] = 0;
        B[2] = 0;
    }

    Magnetic_Field(double x, double y, double z)
    {
        B = new double[3];
        B[0] = x;
        B[1] = y;
        B[2] = z;
    }

    ~Magnetic_Field()
    {
        delete[] B;
    }

    double getX() { return B[0]; }
    double getY() { return B[1]; }
    double getZ() { return B[2]; }

    void setX(double x) { B[0] = x; }
    void setY(double y) { B[1] = y; }
    void setZ(double z) { B[2] = z; }

    double calculateMagnitude()
    {
        return sqrt(B[0]*B[0] + B[1]*B[1] + B[2]*B[2]);
    }

    void printUnitVector()
    {
        double mag = calculateMagnitude();
        if (mag == 0)
        {
            cout << "Unit vector is undefined for a zero vector" << endl;
        }
        else
        {
            cout << "Unit vector: (" << B[0]/mag << ", " << B[1]/mag
                 << ", " << B[2]/mag << ")" << endl;
        }
    }
};

int main()
{
    // Electric fields
    Electric_Field E_default;
    Electric_Field E_components(1e5, 10.9, 1.7e2);
    Electric_Field E_setters;
    E_setters.setX(3);
    E_setters.setY(4);
    E_setters.setZ(12);

    cout << "Electric Field Magnitudes" << endl;
    cout << "E_default: " << E_default.calculateMagnitude() << endl;
    cout << "E_components: " << E_components.calculateMagnitude() << endl;
    cout << "E_setters: " << E_setters.calculateMagnitude() << endl;

    cout << "Inner product of E_components: "
         << E_components.calculateInnerProduct() << endl;
    cout << "Inner product of E_setters: "
         << E_setters.calculateInnerProduct() << endl;

    // Magnetic fields
    Magnetic_Field B_default;
    Magnetic_Field B_components(2.5, 0.3, 4.1);
    Magnetic_Field B_setters;
    B_setters.setX(1);
    B_setters.setY(2);
    B_setters.setZ(2);

    cout << endl << "Magnetic Field Magnitudes" << endl;
    cout << "B_default: " << B_default.calculateMagnitude() << endl;
    cout << "B_components: " << B_components.calculateMagnitude() << endl;
    cout << "B_setters: " << B_setters.calculateMagnitude() << endl;

    cout << "B_components ";
    B_components.printUnitVector();
    cout << "B_setters ";
    B_setters.printUnitVector();

    return 0;
}
