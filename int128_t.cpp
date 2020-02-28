#include "int128_t.h"


//Binary Arithmetic Operators. Return Value. Non-Member.
int128_t operator +(int128_t x, const int128_t& y) {};
int128_t operator -(int128_t x, const int128_t& y) {};
int128_t operator *(int128_t x, const int128_t& y) {};
int128_t operator /(int128_t x, const int128_t& y) {};
int128_t operator %(int128_t x, const int128_t& y) {};

//Shift Operators. Return Value. Non Member.
int128_t operator <<(const int128_t& x, const int128_t& y) {};
int128_t operator >>(const int128_t& x, const int128_t& y) {};

//Stream Operators. Eg. ostream& operator<<(ostream& os, const T& obj). Non-Member.

//Bit Operators. Same as Binary Arithmetic.
int128_t operator ~(const int128_t& x) {};
int128_t operator ^(const int128_t& x, const int128_t& y) {};
int128_t operator &(const int128_t& x, const int128_t& y) {};
int128_t operator |(const int128_t& x, const int128_t& y) {};

//Comparision Operators. Only expects < and ==. Non-Member.
inline bool operator ==(const int128_t& x, const int128_t& y) {};
inline bool operator !=(const int128_t& x, const int128_t& y) {};
inline bool operator >(const int128_t& x, const int128_t& y) {};
inline bool operator <(const int128_t& x, const int128_t& y) {};
inline bool operator >=(const int128_t& x, const int128_t& y) {};
inline bool operator <=(const int128_t& x, const int128_t& y) {};

//Assignment Operator. Swap.
int128_t& int128_t::operator =(int128_t rhs) {};

//Increment and Decrement Operators. Prefix and Postfix.
int128_t& int128_t::operator ++(void) {};
int128_t& int128_t::operator --(void) {};
int128_t& int128_t:: operator ++(int) {}; //Requires int Argument.
int128_t& int128_t::operator --(int) {};

//Operate and Assign. += Returns a Reference. + Returns a copy.
int128_t& int128_t::operator &=(const int128_t& x) {};
int128_t& int128_t::operator |=(const int128_t& x) {};
int128_t& int128_t::operator ^=(const int128_t& x) {};
int128_t& int128_t::operator <<=(int128_t n) {};
int128_t& int128_t::operator >>=(int128_t n) {};
int128_t& int128_t::operator +=(const int128_t& x) {};
int128_t& int128_t::operator -=(const int128_t& x) {};
int128_t& int128_t::operator *=(const int128_t& x) {};
int128_t& int128_t::operator /=(const int128_t& x) {};
int128_t& int128_t::operator %=(const int128_t& x) {};