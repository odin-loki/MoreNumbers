#pragma once

#include <immintrin.h>
#include <emmintrin.h>


typedef struct int128_t
{
public:
	//Assignment Operator. Swap.
	int128_t& operator =(int128_t rhs);

	//Increment and Decrement Operators. Prefix and Postfix.
	int128_t& operator ++(void);
	int128_t& operator --(void);
	int128_t& operator ++(int); //Requires int Argument.
	int128_t& operator --(int);

	//Operate and Assign. += Returns a Reference. + Returns a copy.
	int128_t& operator &=(const int128_t& x);
	int128_t& operator |=(const int128_t& x);
	int128_t& operator ^=(const int128_t& x);
	int128_t& operator <<=(int128_t n);
	int128_t& operator >>=(int128_t n);
	int128_t& operator +=(const int128_t& x);
	int128_t& operator -=(const int128_t& x);
	int128_t& operator *=(const int128_t& x);
	int128_t& operator /=(const int128_t& x);
	int128_t& operator %=(const int128_t& x);

	//Rare Overloads.
	//Logical and, or. || &&. Unary prefix !
	//Array Subscripting
	//Pointer Like Types. * & 
	//Memory management. new new[] delete delete[]
	//Function Call Operator.

private:
	__m128i number;
};

//Binary Arithmetic Operators. Return Value. Non-Member.
int128_t operator +(int128_t x, const int128_t& y);
int128_t operator -(int128_t x, const int128_t& y);
int128_t operator *(int128_t x, const int128_t& y);
int128_t operator /(int128_t x, const int128_t& y);
int128_t operator %(int128_t x, const int128_t& y);

//Shift Operators. Return Value. Non Member.
int128_t operator <<(const int128_t& x, const int128_t& y);
int128_t operator >>(const int128_t& x, const int128_t& y);

//Stream Operators. Eg. ostream& operator<<(ostream& os, const T& obj). Non-Member.

//Bit Operators. Same as Binary Arithmetic.
int128_t operator ~(const int128_t& x);
int128_t operator ^(const int128_t& x, const int128_t& y);
int128_t operator &(const int128_t& x, const int128_t& y);
int128_t operator |(const int128_t& x, const int128_t& y);

//Comparision Operators. Only expects < and ==. Non-Member.
inline bool operator ==(const int128_t& x, const int128_t& y);
inline bool operator !=(const int128_t& x, const int128_t& y);
inline bool operator >(const int128_t& x, const int128_t& y);
inline bool operator <(const int128_t& x, const int128_t& y);
inline bool operator >=(const int128_t& x, const int128_t& y);
inline bool operator <=(const int128_t& x, const int128_t& y);

//inline bool operator==(const X& lhs, const X& rhs) { /* do actual comparison */ }
//inline bool operator!=(const X& lhs, const X& rhs) { return !operator==(lhs, rhs); }
//inline bool operator< (const X& lhs, const X& rhs) { /* do actual comparison */ }
//inline bool operator> (const X& lhs, const X& rhs) { return  operator< (rhs, lhs); }
//inline bool operator<=(const X& lhs, const X& rhs) { return !operator> (lhs, rhs); }
//inline bool operator>=(const X& lhs, const X& rhs) { return !operator< (lhs, rhs); }

