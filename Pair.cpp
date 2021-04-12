// Pair.cpp
#include "Pair.h"
Pair::Pair()
{
	x = 0;
	y = 0;
}
Pair::Pair(const double a, const double b)
{
	x = a;
	y = b;
}
Pair::Pair(const Pair& p)
{
	x = p.x;
	y = p.y;
}
bool Pair::operator ==(const Pair& p)
{
	if (x == p.x && y == p.y)
		return true;
	else
		return false;
}
bool Pair::operator !=(const Pair& p)
{
	if (x != p.x || y != p.y)
		return true;
	else
		return false;
}
bool Pair::operator >=(const Pair& p)
{
	if ((x > p.x)  || (x == p.x && y > p.y))
		return true;
	else
		return false;
}
bool Pair::operator <=(const Pair& p)
{
	if ((x < p.x) || (x == p.x && y < p.y))
		return true;
	else
		return false;
}
