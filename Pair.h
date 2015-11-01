#ifndef Pair_H
#define Pair_H

template<typename type_x, typename type_y, typename type_z> class Triple;

template<typename type_a = int,typename type_b = int>
class Pair {

	public:

		Pair(type_a f, type_b s);
		
		type_a getFirst();
		type_b getSecond();
	
		bool operator==(Pair< type_a, type_b> secondPair);
		bool operator!=(Pair<type_a, type_b> secondPair);
		
		bool operator<(Pair< type_a, type_b> secondPair);
		bool operator<=(Pair<type_a, type_b> secondPair);
		bool operator>(Pair< type_a, type_b> secondPair);
		bool operator>=(Pair< type_a, type_b> secondPair);
		

		
	//#ifdef Triple_H
		template<typename type_x, typename type_y, typename type_z>
		bool operator==(Triple<type_x, type_y, type_z> compareTriple);
		template<typename type_x, typename type_y, typename type_z>
		bool operator!=(Triple<type_x, type_y, type_z>compareTriple);
		
		template<typename type_x, typename type_y, typename type_z>
		bool operator<(Triple<type_x, type_y, type_z>compareTriple);
		template<typename type_x, typename type_y, typename type_z>
		bool operator<=(Triple<type_x, type_y, type_z> compareTriple);
		template<typename type_x, typename type_y, typename type_z>	
		bool operator>(Triple<type_x, type_y, type_z> compareTriple);
		template<typename type_x, typename type_y, typename type_z>
		bool operator>=(Triple<type_x, type_y, type_z> compareTriple);
	//#endif	
	private: 	const type_a first;
				const type_b second;
};

#include "Pair.cpp" //musst be included because
                    //we're using templates

#endif



