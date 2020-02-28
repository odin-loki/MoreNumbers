//#include "uint128_t.h"
//
//using namespace std;
//
/////Constructors
//uint128_t::uint128_t() : bits() {};
//
//uint128_t::uint128_t(uint64_t x)
//{
//	uint64_t n = 0;
//	while (x != 0)
//	{
//		bits[n++] = x;
//		x >> 1;
//	}
//};
//
//uint128_t::uint128_t(string x)
//{
//	//Implement POW lib. That gets each num and adds with pow.
//};
//
//
//uint128_t::uint128_t(const bitset<length> x) : bits(x) {};
//
/////Array and Conversion functions
//inline bool& uint128_t::operator[](uint64_t& n) const { return bits[n]; }
//inline uint32_t& uint128_t::toU32_t() const { return bits.to_ulong(); }
//inline int64_t& uint128_t::toU64_t() const { return bits.to_ullong(); }
//
/////Unary Operators
//inline uint128_t& uint128_t::operator +(const uint128_t& x, const uint128_t& y) { return x + y; }
//inline uint128_t& uint128_t::operator -(const uint128_t& x, const uint128_t& y) { return x - y; }
//inline uint128_t& uint128_t::operator *(const uint128_t& x, const uint128_t& y) { return x * y; }
//inline uint128_t& uint128_t::operator /(const uint128_t& x, const uint128_t& y) { return x / y; }
//inline uint128_t& uint128_t::operator <<(const uint128_t& x, const uint128_t& y) { return x << y; }
//inline uint128_t& uint128_t::operator >>(const uint128_t& x, const uint128_t& y) { return x >> y; }
//inline uint128_t& uint128_t::operator %(const uint128_t& x, const uint128_t& y) { return x % y; }
//inline uint128_t& uint128_t::operator ^(const uint128_t& x, const uint128_t& y) { return x ^ y; }
//inline uint128_t& uint128_t::operator &(const uint128_t& x, const uint128_t& y) { return x & y; }
//inline uint128_t& uint128_t::operator |(const uint128_t& x, const uint128_t& y) { return x | y; }
//
/////Operator and Assign.
//inline uint128_t& uint128_t::operator ~(void) { ~bits; return *this; }
//inline uint128_t& uint128_t::operator &=(const uint128_t& x) { bits &= x.bits; return *this; }
//inline uint128_t& uint128_t::operator |=(const uint128_t& x) { bits |= x.bits; return *this; }
//inline uint128_t& uint128_t::operator ^=(const uint128_t& x) { bits ^= x.bits; return *this; }
//inline uint128_t& uint128_t::operator <<=(uint64_t n) {	bits <<= n;	return *this; }
//inline uint128_t& uint128_t::operator >>=(uint64_t n) {	bits >>= n;	return *this; }
//inline uint128_t& uint128_t::operator ++(void) { bits |= 1; return *this; }
//inline uint128_t& uint128_t::operator --(void) { bits |= (~1); return *this; }
//inline uint128_t& uint128_t::operator +=(const uint128_t& x) { bits |= x.bits; return *this; }
//inline uint128_t& uint128_t::operator -=(const uint128_t& x) { bits |= (~x.bits); return *this; }
//inline uint128_t& uint128_t::operator *=(const uint128_t& x){ return *this * x; }
//inline uint128_t& uint128_t::operator /=(const uint128_t& x){ return *this / x; }
//inline uint128_t& uint128_t::operator %=(const uint128_t& x){ return *this % x; }
//
/////Comparision Operators
//inline bool& uint128_t::operator ==(const uint128_t& x, const uint128_t& y) { return x.bits == y.bits; }
//inline bool& uint128_t::operator !=(const uint128_t& x, const uint128_t& y) { return x.bits != y.bits; }
//inline bool& uint128_t::operator >(const uint128_t& x, const uint128_t& y) { return x.bits > y.bits; }
//inline bool& uint128_t::operator <(const uint128_t& x, const uint128_t& y) { return x.bits < y.bit); }
//inline bool& uint128_t::operator >=(const uint128_t& x, const uint128_t& y) { return x.bits >= y.bits; }
//inline bool& uint128_t::operator <=(const uint128_t& x, const uint128_t& y) { return x.bits <= y.bits; }
