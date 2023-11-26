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
    
    
   virtual std::string get_sides_count ()
    {
       std::string show_sides = "Number of sides: " + std::to_string(sides_count);
       return show_sides;
    }
    
   virtual std::string get_name ()
    {
        std::string show_name = name + ": ";
       return show_name;
    }

    
    virtual bool check ()
    {
     if (sides_count == 0)
     {
         return true;
     } else {
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
    
    std::string get_sides ()
    {
        std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
        return all_sides;
    }
    
    std::string get_angles ()
    {
        std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
        return all_angles;
    }
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
     if (sides_count == 3 && A + B + C == 180)
     {
         return true;
     } else {
         return false;
     }
    }
    
    void print_info ()
    {
        std::cout << get_name() << std::endl;
        if(check () == true)
        {
            std::cout << "Correct" << std::endl;
        } else
        {
            std::cout << "Incorrect" << std::endl;
        }
        std::cout << "Sides: ";
        std::cout << get_sides() << std::endl;
        std::cout << "Angles: ";
        std::cout << get_angles() << std::endl;
    }
};

class Right_triangle : public Triangle
{
private:
    int sides_count = 3;
    std::string name = "Right triangle";
public:
    Right_triangle (int a, int b, int c, int A, int B) : Triangle (a, b, c, A, B, 90){};
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Triangle::check() == true && C == 90)
        {
            return true;
        } else {
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
    Isosceles_triangle (int a, int b, int A, int B) : Triangle (a, b, a, A, B, A ){};
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Triangle::check() == true && a == c && A == C)
        {
            return true;
        } else {
            return false;
        }
    }
};

class Equilateral_triangle : public Triangle
{
private:
    int sides_count = 3;
    std::string name = "Equilateral triangle";
public:
    Equilateral_triangle (int a) : Triangle (a, a, a, 60, 60, 60){};
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Triangle::check() == true && a ==  45 && b == 45 && c == 45 && A  == 60 && B == 60 & C == 60)
        {
            return true;
        } else
        {
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
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (sides_count == 4 && A + B + C + D == 360)
        {
            return true;
        } else
        {
            return false;
        }
    }
    
    std::string get_sides ()
    {
        std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
        return all_sides;
    }
    
    std::string get_angles ()
    {
        std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
        return all_angles;
    }
    
    void print_info ()
    {
        std::cout << get_name() << std::endl;
        if (check () == true)
        {
            std::cout << "Correct" << std::endl;
        }
        else
        {
            std::cout << "Incorrect" << std::endl;
        }
        std::cout << "Sides: ";
        std::cout << get_sides() << std::endl;;
        std::cout << "Angles: ";
        std::cout << get_angles() << std::endl;
    }
};

class Rectangle : public Quadrilateral
{
private:
    int sides_count = 4;
    std::string name = "Rectangle";
public:
    Rectangle (int a, int b) : Quadrilateral (a, b, a, b, 90, 90, 90, 90){};
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Quadrilateral::check() == true && a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90)
        {
            return true;
        } else
        {
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
    Square (int a) : Rectangle (a, a){};
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Rectangle::check() == true && a == c && c == b && a == d && b == d && A == 90 && B == 90 && C == 90 && D == 90)
        {
            return true;
        } else
        {
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
    Parallelogram (int a, int b, int A, int B) : Quadrilateral (a, b, a, b, A, B, A, B){}
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Quadrilateral::check() == true && a == c && b == d && A == C & B == D)
        {
            return true;
        } else
        {
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
    Rhomb (int a, int A, int B) : Parallelogram (a, a, A, B){}
    
    std::string get_name () override
     {
         std::string show_name = name + ": ";
        return show_name;
     }
    
    std::string get_sides_count () override
     {
         std::string show_sides = "Number of sides: " + std::to_string(sides_count);
         return show_sides;
     }
    
    bool check () override
    {
        if (Parallelogram::check() == true && a == c && c == b && a == d && b == d && A == C & B == D)
        {
            return true;
        } else
        {
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
