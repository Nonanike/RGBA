#ifndef RGBA_H_
#define RGBA_H_
#include <algorithm>

struct RGBA
{
    unsigned char r=0;
    unsigned char g=0;
    unsigned char b=0;
    unsigned char a=255;

    RGBA()=default;
    RGBA(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a)
            : r{_r},g{_g},b{_b},a{_a} {}
    void set(unsigned char _r, unsigned char _g, unsigned char _b, unsigned char _a)
    {
        r=_r;
        g=_g;
        b=_b;
        a=_a;
    }
    void clamp(unsigned char _min, unsigned char _max)
    {
        r=std::clamp(val:r.lo:_min,hi:_max);
        g=std::clamp(val:g,lo:_min,hi:_max);
        b=std::clamp(val:b,lo:_min,hi:_max);
        a=std::clamp(val:a,lo=_min,hi=_max);
    }
};

#endif