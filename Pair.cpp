#include "Pair.h"

#ifndef Pair_CPP
#define Pair_CPP

template <typename type_a, typename type_b>
Pair<type_a,type_b>::Pair(type_a f, type_b s): first(f), second(s){}


template <typename type_a, typename type_b>
type_a Pair<type_a,type_b>::getFirst() {
		return first;
}
		
		
template <typename type_a, typename type_b>
type_b Pair<type_a,type_b>::getSecond() {
		return second;
}
	
template <typename type_a, typename type_b>
bool Pair<type_a,type_b>::operator<=(Pair<type_a, type_b> secondPair) {
		if 	((this->first <= secondPair.first) &&
			(this->second <= secondPair.second))
				return true;
		else
				return false;
}
	
	
template <typename type_a, typename type_b>
bool Pair<type_a,type_b>::operator<(Pair< type_a, type_b> secondPair) {
		if 	((this->first <= secondPair.first) &&
			(this->second < secondPair.second))
			
			return true;
		else
			return false;
}
	
template <typename type_a, typename type_b>
bool Pair<type_a,type_b>::operator==(Pair< type_a, type_b> secondPair) {
		if 	((this->first == secondPair.first) &&
			(this->second == secondPair.second))
				return true;
		else
				return false;
}
	
template <typename type_a, typename type_b>
bool Pair<type_a,type_b>::operator>(Pair< type_a, type_b> secondPair) {
		if 	(!(*this <= secondPair))
			return true;
		else
			return false;
}
	
template <typename type_a, typename type_b>
bool Pair<type_a,type_b>::operator>=(Pair< type_a, type_b> secondPair) {
		if 	(!(*this < secondPair))
			return true;
		else
			return false;
}
		
		
//#ifdef Triple_H

template<typename type_a, typename type_b>
template<typename type_x, typename type_y, typename type_z>
bool Pair<type_a,type_b>::operator<=(Triple<type_x, type_y, type_z> compareTriple) {
		if 	((this->first <= compareTriple.getFirst()) &&
			(this->second <= compareTriple.getSecond()))
				return true;
		else
				return false;
}
	
		
template<typename type_a, typename type_b>
template<typename type_x, typename type_y, typename type_z>
bool Pair<type_a,type_b>::operator<(Triple<type_x, type_y, type_z> compareTriple) {
		if 	((this->first <= compareTriple.getFirst()) &&
			(this->second < compareTriple.getSecond()))
			
				return true;
		else
				return false;
}
		
			
template<typename type_a, typename type_b>
template<typename type_x, typename type_y, typename type_z>
bool Pair<type_a,type_b>::operator==(Triple<type_x, type_y, type_z> compareTriple) {
		if 	((this->first == compareTriple.getFirst()) &&
			(this->second == compareTriple.getSecond()))
				return true;
		else
				return false;
}

			
template<typename type_a, typename type_b>
template<typename type_x, typename type_y, typename type_z>
bool Pair<type_a,type_b>::operator>(Triple<type_x, type_y, type_z> compareTriple) {
	if 	(!(*this <= compareTriple))
				return true;
		else
				return false;
}

			
template<typename type_a, typename type_b>
template<typename type_x, typename type_y, typename type_z>
bool Pair<type_a,type_b>::operator>=(Triple<type_x, type_y, type_z> compareTriple) {
			if 	(!(*this < compareTriple))
				return true;
			else
				return false;
}
	
//#endif

#endif
