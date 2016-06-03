#include "Pair.h"

#ifndef Pair_CPP
#define Pair_CPP

template <typename type_a, typename type_b>
Pair<type_a, type_b>::Pair(type_a f, type_b s) : first(f), second(s) {}

template<typename type_a, typename type_b>
Pair<type_a, type_b>::Pair(Pair & p) : first(p.first), second(p.second) {}

template <typename type_a, typename type_b>
Pair<type_a, type_b>::Pair() : first(static_cast<type_b>(0)), second(static_cast<type_b>(0)) {}

template <typename type_a, typename type_b>
Pair<type_a, type_b>::Pair(type_a f) : first(static_cast<type_a>(f)), second(static_cast<type_b>(0)) {}


template <typename type_a, typename type_b>
inline type_a Pair<type_a, type_b>::getFirst() const {
	return first;
}


template <typename type_a, typename type_b>
inline type_b Pair<type_a, type_b>::getSecond() const {
	return second;
}

//compare with other Pair
template <typename type_a, typename type_b>
bool operator==(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return ((firstPair.getFirst() == secondPair.getFirst()) &&
		(firstPair.getSecond() == secondPair.getSecond()));
}

template <typename type_a, typename type_b>
bool operator!=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return 	(!(firstPair == secondPair));
}


template <typename type_a, typename type_b>
bool operator<(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return ((firstPair.getFirst() <= secondPair.getFirst()) &&
		(firstPair.getSecond() < secondPair.getSecond()));
}


template <typename type_a, typename type_b>
bool operator<=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return ((firstPair < secondPair) ||
		(firstPair == secondPair));
}


template <typename type_a, typename type_b>
bool operator>(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return 	(!(firstPair <= secondPair));
}

template <typename type_a, typename type_b>
bool operator>=(const Pair< type_a, type_b>& firstPair, const Pair< type_a, type_b>& secondPair) {
	return 	(!(firstPair < secondPair));
}

//arithmetic ops
template<typename type_a, typename type_b>
Pair< type_a, type_b> operator+(const Pair<type_a, type_b>& firstPair, const Pair<type_a, type_b>& secondPair)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() + secondPair.getFirst()), (firstPair.getSecond() + secondPair.getSecond()) };
	return erg;
}

template<typename type_a, typename type_b>
Pair< type_a, type_b> operator-(const Pair<type_a, type_b>& firstPair, const Pair<type_a, type_b>& secondPair)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() - secondPair.getFirst()), (firstPair.getSecond() - secondPair.getSecond()) };
	return erg;
}

template<typename type_a, typename type_b>
Pair< type_a, type_b> operator*(const Pair<type_a, type_b>& firstPair, const Pair<type_a, type_b>& secondPair)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() * secondPair.getFirst()), (firstPair.getSecond() * secondPair.getSecond()) };
	return erg;
}

template<typename type_a, typename type_b>
Pair< type_a, type_b> operator/(const Pair<type_a, type_b>& firstPair, const Pair<type_a, type_b>& secondPair)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() / secondPair.getFirst()), (firstPair.getSecond() / secondPair.getSecond()) };
	return erg;
}


//compare with Triple
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator==(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return ((firstPair.getFirst() == compareTriple.getFirst()) &&
		(firstPair.getSecond() == compareTriple.getSecond()));
}


template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator!=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return 	(!(firstPair == compareTriple));
}


template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return ((firstPair.getFirst() <= compareTriple.getFirst()) &&
		(firstPair.getSecond() < compareTriple.getSecond()));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator<=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return ((firstPair <= compareTriple) ||
		(firstPair == compareTriple));
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return (!(firstPair <= compareTriple));
}


template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
bool operator>=(const Pair< type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple) {
	return (!(firstPair < compareTriple));
}

//arithmetic ops
template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator+(const Pair<type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple)
{
	Pair< type_a, type_b> erg{(firstPair.getFirst() + compareTriple.getFirst()),(firstPair.getSecond() + compareTriple.getSecond())};
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator-(const Pair<type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() - compareTriple.getFirst()),(firstPair.getSecond() - compareTriple.getSecond()) };
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator*(const Pair<type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() * compareTriple.getFirst()),(firstPair.getSecond() * compareTriple.getSecond()) };
	return erg;
}

template<typename type_a = int, typename type_b = int, typename type_x = int, typename type_y = int, typename type_z = int>
Pair< type_a, type_b> operator/(const Pair<type_a, type_b>& firstPair, const Triple<type_x, type_y, type_z>& compareTriple)
{
	Pair< type_a, type_b> erg{ (firstPair.getFirst() / compareTriple.getFirst()),(firstPair.getSecond() / compareTriple.getSecond()) };
	return erg;
}

#endif
