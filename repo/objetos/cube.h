#ifndef _CUBE_H_
#define _CUBE_H_
#include "shape3d.h"
class Cube : public Shape3D {
protected:
private:
    double length; // Private attribute
public:
    // Constructor
    Cube(double l = 1.0) : length(l) {}
    Cube()  {   
        length = 1.0;
    } 
    // Getter for length
    double getLength() const {
        return length;
    }
    // Setter for length
    void setLength(double l) {
        if (l > 0) // Ensuring valid length
        length = l;
    }
    // Calculate Volume: V = l³
    double getVolume() const override {
        return length * length * length;
    }
    // Calculate Surface Area: A = 6 * l²
    double getSurfaceArea() const override {
        return 6 * length * length;
    }
};
#endif // _CUBE_H_