#pragma once

template <class T>
class Accum {
   private:
    T total;

   public:
    Accum(T start) : total(start){};
    //    T operator+=(T const &t)
    //    {
    //        return total = total + t;
    //    }
    //    ;

    Accum<T> operator+=(T const& t) {
        T const& x = t;
        std::cout << x << std::endl;
        total = total + t;
        return *this;
    };

    T GetTotal() const { return total; };
    // virtual ~Accum();
};
