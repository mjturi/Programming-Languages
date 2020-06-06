#include <iostream>
#include <math.h>

class point {
private:
   float x_coord;
   float y_coord;

public:
    point(float x, float y) {
        x_coord = x;
        y_coord = y;
    }
    inline float distance()const{
        float dis = powf(powf(x_coord, 2) + powf(y_coord, 2), 0.5);
        return dis;
    }
    friend inline bool operator< (const point&, const point&);
    friend inline std::ostream& operator<<(std::ostream& os, const point &pt);
};

    inline bool operator< (const point& lhs, const point& rhs) {
       return (lhs.distance() < rhs.distance());
    }

    inline bool operator> (const point& lhs, const point& rhs) {
        return (!(lhs < rhs) && rhs<lhs);
    }

    inline bool operator>= (const point& lhs, const point& rhs) {
        return (!(lhs < rhs));
    }

   inline bool operator== (const point& lhs, const point& rhs) {
       return (!(lhs < rhs) && !(rhs < lhs));
   }

   inline bool operator<= (const point& lhs, const point& rhs) {
       return ((lhs < rhs) || !(rhs < lhs));
   }
   inline bool operator!= (const point& lhs, const point& rhs) {
       return ((lhs < rhs) || (rhs < lhs));
   }
   inline std::ostream& operator<< (std::ostream& os, const point &pt)
   {
       os << "Point(" << pt.x_coord << ", " << pt.y_coord << ")";
       return os;
   }
