// Pair.h 
#pragma once
class Pair{
protected:
	double x;
	double y;
public:
	Pair();
	Pair(const double a, const double b);
	Pair(const Pair&);
	bool operator ==(const Pair&);
	bool operator !=(const Pair&);
	bool operator >=(const Pair&);
	bool operator <=(const Pair&);
};

