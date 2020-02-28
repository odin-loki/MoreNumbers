//#pragma once
//
///*
//	Reference:https://alikhuram.wordpress.com/2013/05/17/representing-large-fixed-width-integers-in-c/
// */
//
//#include <bitset>
//
//static const uint32_t length = 128;
//
//class uint128_t
//{
//
//public:
//	uint128_t() : bits() {};
//	uint128_t(uint64_t x) {};
//	uint128_t(const bitset<length> x) : bits(x) {};
//
//	Array and Conversion functions
//	inline bool& operator[](uint64_t& n) const;
//	inline uint32_t& toU32_t() const;
//	inline int64_t& toU64_t() const;
//
//	Unary Operators
//	inline uint128_t& operator +(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator -(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator *(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator /(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator <<(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator >>(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator %(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator ^(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator &(const uint128_t& x, const uint128_t& y);
//	inline uint128_t& operator |(const uint128_t& x, const uint128_t& y);
//
//	Operator and Assign.
//	inline uint128_t& operator ~(void);
//	inline uint128_t& operator &=(const uint128_t& x);
//	inline uint128_t& operator |=(const uint128_t& x);
//	inline uint128_t& operator ^=(const uint128_t& x);
//	inline uint128_t& operator <<=(uint64_t n);
//	inline uint128_t& operator >>=(uint64_t n);
//	inline uint128_t& operator ++(void);
//	inline uint128_t& operator --(void);
//	inline uint128_t& operator +=(const uint128_t& x);
//	inline uint128_t& operator -=(const uint128_t& x);
//	inline uint128_t& operator *=(const uint128_t& x);
//	inline uint128_t& operator /=(const uint128_t& x);
//	inline uint128_t& operator %=(const uint128_t& x);
//
//	Comparision Operators
//	inline bool& operator ==(const uint128_t& x, const uint128_t& y);
//	inline bool& operator !=(const uint128_t& x, const uint128_t& y);
//	inline bool& operator >(const uint128_t& x, const uint128_t& y);
//	inline bool& operator <(const uint128_t& x, const uint128_t& y);
//	inline bool& operator >=(const uint128_t& x, const uint128_t& y);
//	inline bool& operator <=(const uint128_t& x, const uint128_t& y);
//
//
//private:
//	bitset<length> bits;
//};
//
