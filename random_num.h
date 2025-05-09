#pragma once
#include<random>
#include <random>

using namespace std;

template<typename T>
T getRandom(T min, T max) 
{
	random_device rd;
	mt19937 gen(rd());

	if (is_integral_v<T>) {
		uniform_int_distribution<int> dist(min, max);
		return dist(gen);
	}
	else {
		uniform_real_distribution<> dist(min, max);
		return dist(gen);
	}

}
