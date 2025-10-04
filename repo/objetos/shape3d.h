#ifndef _SHAPED3D_H_
#define _SHAPED3D_H_

class Shape3D {
public:
    virtual double getVolume() const = 0; // Pure virtual function for volume
    virtual double getSurfaceArea() const = 0; // Pure virtual function for surface area
    virtual ~Shape3D() {} // Virtual destructor
};