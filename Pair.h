#ifndef Pair_H
#define Pair_H

template<typename type_x, typename type_y, typename type_z> class Triple;

template<typename type_a = int, typename type_b = int>
class Pair {

public:
	Pair();
	Pair(type_a f);
	Pair(type_a f, type_b s);
	Pair(Pair& p);

	inline type_a getFirst() const;
	inline type_b getSecond()const;


private: 	 type_a first	=	0;
			 type_b second	=	0;
};

//compare with other Pair(bool)
template<typename type_a = int, typename type_b = int>
bool operator==(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
bool operator!=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
bool operator<(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
bool operator<=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
bool operator>(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
bool operator>=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

//arithmetic opertors
template<typename type_a = int, typename type_b = int>
Pair< type_a, type_b> operator+(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
Pair< type_a, type_b> operator-(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
Pair< type_a, type_b> operator*(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

template<typename type_a = int, typename type_b = int>
Pair< type_a, type_b> operator/(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair);

//compare with Triple
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator==(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator!=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

//arithmetic opertors
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator+(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator-(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator*(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator/(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple);


#include "Pair.cpp" //musst be included because
//we're using templates

#endif



