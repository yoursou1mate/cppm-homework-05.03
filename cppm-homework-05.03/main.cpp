//
//  main.cpp
//  cppm-homework-05.03
//
//  Created by a1ex on 11/6/23.
//

#include <iostream>
#include <string>


class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Figure";
public:
    Figure (int sides_count){};
    
    
   virtual void get_sides_count ()
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
   virtual void get_name ()
    {
        std::cout << name << ": " << std::endl;
    }
    
//    void get_sides ()
//    {
//        std::cout << "a=" << a << " b=" << b << " c=" << c << std::endl;
//    }
//
//    void get_angles ()
//    {
//        std::cout << "A=" << A << " B=" << B << " C=" << C << std::endl;
//    }
//
    
//    void print_info ()
//    {
//        std::cout << "Sides: ";
//        get_sides();
//        std::cout << "Angles: ";
//        get_angles();
//    }
    
    virtual bool check ()
    {
     if (sides_count == 0)
     {
         std::cout << "Correct" << std::endl;
         return true;
     } else {
         std::cout << "Incorrect" << std::endl;
         return false;
     }
    }
    
};


class Triangle : public Figure
{
protected:
    int sides_count = 3;
    int a = 0;
    int b  = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    std::string name = "Triangle";
    
public:
    Triangle (int a,int b, int c, int A, int B, int C) : Figure (0)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    
    void get_sides ()
    {
      std::cout << "a=" << a << " b=" << b << " c=" << c << std::endl;
    }
    
    void get_angles ()
    {
      std::cout << "A=" << A << " B=" << B << " C=" << C << std::endl;
    }
    
    void get_name () override
     {
         std::cout << name << ": " << std::endl;
     }
    
    void get_sides_count () override
     {
         std::cout << "Number of sides: " << sides_count << std::endl;
     }
    
    bool check () override
    {
     if (sides_count == 3 && A + B + C == 180)
     {
         std::cout << "Correct" << std::endl;
         return true;
     } else {
         std::cout << "Incorrect" << std::endl;
         return false;
     }
    }
    
    void print_info ()
    {
        std::cout << "Sides: ";
        get_sides();
        std::cout << "Angles: ";
        get_angles();
    }
};

class Right_triangle : public Triangle
{
private:
    int sides_count = 3;
    int C = 90;
    std::string name = "Right triangle";
public:
    Right_triangle (int a, int b, int c, int A, int B) : Triangle (a, b, c, A, B, Right_triangle::C = 90){};
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (C == 90)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
    
};
class Isosceles_triangle : public Triangle
{
private:
    int sides_ccount = 3;
    std::string name = "Isosceles triangle";
public:
    Isosceles_triangle (int a, int b, int A, int B) : Triangle (a, b, c = a, A, B, C = A ){};
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 3 && a == c && A == C)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
};

class Equilateral_triangle : public Triangle
{
private:
    int sides_count = 3;
    int A  = 60;
    std::string name = "Equilateral triangle";
public:
    Equilateral_triangle (int a) : Triangle (a, b = a, c = a, Equilateral_triangle::A = 60, B = A, C = A){};
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 3 && a ==  45 && b == 45 && c == 45 && A  == 60 && B == 60 & C == 60)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
    
};


class Quadrilateral : public Figure
{
protected:
    int a = 0;
    int b  = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int sides_count = 4;
    std::string name = "Quadrilateral";
    
public:
    Quadrilateral (int a, int b, int c, int d, int A, int B, int C, int D) : Figure (0)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 4 && A + B + C + D == 360)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
    
    void get_sides ()
    {
      std::cout << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    }
    
    void get_angles ()
    {
      std::cout << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
    
    void print_info ()
    {
        std::cout << "Sides: ";
        get_sides();
        std::cout << "Angles: ";
        get_angles();
    }
};

class Rectangle : public Quadrilateral
{
private:
    int sides_count = 4;
    std::string name = "Rectangle";
public:
    Rectangle (int a, int b) : Quadrilateral (a, b, c = a, d = b, A = 90, B = A, C = A, D = A){};
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 4 && a == c && b == d && A == 90, B == 90, C == 90, D == 90)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
};


class Square : public Rectangle
{
private:
    int sides_count = 4;
    std::string name = "Square";
public:
    Square (int a) : Rectangle (a, b = a){};
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 4 && a == c, c == b, a == d, b == d && A == 90, B == 90, C == 90, D == 90)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
};

class Parallelogram : public Quadrilateral
{
private:
    int sides_count = 4;
    std::string name = "Parallelogram";
public:
    Parallelogram (int a, int b, int A, int B) : Quadrilateral (a, b, c = a, d = b, A, B, C = A, D = B){}
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 4 && a == c, b == d && A == C & B == D)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
};

class Rhomb : public Parallelogram
{
private:
    int sides_count = 4;
    std::string name = "Rhomb";
public:
    Rhomb (int a, int A, int B) : Parallelogram (a, b = a, A, B){}
    
    void get_name () override
    {
        std::cout << name << ": " << std::endl;
    }
    
    void get_sides_count () override
    {
        std::cout << "Number of sides: " << sides_count << std::endl;
    }
    
    bool check () override
    {
        if (sides_count == 4 && a == c, c == b, a == d, b == d && A == C & B == D)
        {
            std::cout << "Correct" << std::endl;
            return true;
        } else
        {
            std::cout << "Incorrect" << std::endl;
            return false;
        }
    }
};



int main(int argc, const char * argv[]) {
  
    Figure figure (0);
    figure.get_name();
    figure.check();
    figure.get_sides_count();
    std::cout << std::endl;
    
    Triangle triangle (25,27,38,70,65,89);
    Triangle* par_triangle = &triangle;
    par_triangle->get_name();
    par_triangle->check();
    par_triangle->get_sides_count();
    triangle.print_info();
    std::cout << std::endl;
    
    Right_triangle right_Triangle (40,35,10,78,34);
    Right_triangle* par_right_triangle = &right_Triangle;
    par_right_triangle->get_name();
    par_right_triangle->check();
    par_right_triangle->get_sides_count();
    right_Triangle.print_info();
    std::cout << std::endl;
    
    
    Isosceles_triangle isosceles_Triangle (45,70,50,80);
    Isosceles_triangle* par_isosceles_Triangle = &isosceles_Triangle;
    par_isosceles_Triangle->get_name();
    par_isosceles_Triangle->check();
    par_isosceles_Triangle->get_sides_count();
    isosceles_Triangle.print_info();
    std::cout << std::endl;
    
    Equilateral_triangle equilateral_Triangle (45);
    Equilateral_triangle* par_equilateral_Triangle = &equilateral_Triangle;
    par_equilateral_Triangle->get_name();
    par_equilateral_Triangle->check();
    par_equilateral_Triangle->get_sides_count();
    equilateral_Triangle.print_info();
    std::cout << std::endl;
    
    Quadrilateral quadrilateral (45,65,35,75,60,60,30,30);
    Quadrilateral* par_quadrilateral = &quadrilateral;
    par_quadrilateral->get_name();
    par_quadrilateral->check();
    par_quadrilateral->get_sides_count();
    quadrilateral.print_info();
    std::cout << std::endl;
    
    Rectangle rectangle (45, 65);
    Rectangle* par_rectangle = &rectangle;
    par_rectangle->get_name();
    par_rectangle->check();
    par_rectangle->get_sides_count();
    rectangle.print_info();
    std::cout << std::endl;
    
    Square square (45);
    Square* par_square = &square;
    par_square->get_name();
    par_square->check();
    par_square->get_sides_count();
    square.print_info();
    std::cout << std::endl;
    
    Parallelogram parallelogram (45,75,35,55);
    Parallelogram* par_parallelogram = &parallelogram;
    par_parallelogram->get_name();
    par_parallelogram->check();
    par_parallelogram->get_sides_count();
    parallelogram.print_info();
    std::cout << std::endl;
    
    Rhomb rhomb (45,35,55);
    Rhomb* par_rhomb = &rhomb;
    par_rhomb->get_name();
    par_rhomb->check();
    par_rhomb->get_sides_count();
    rhomb.print_info();
    std::cout << std::endl;
    
    
    
    
    
    
    
    
    return 0;
}
