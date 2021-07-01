#include "RectF.h"

RectF::RectF(float up_in, float bottom_in, float left_in, float right_in)
	:
	up(up_in),
	bottom(bottom_in),
	left(left_in),
	right(right_in)
{
}

RectF::RectF(const Vec2& topLeft, const Vec2& bottomRight)
	:
	RectF(topLeft.y, bottomRight.y, topLeft.x, bottomRight.x)
{
}

RectF::RectF(const Vec2& topLeft, float width, float height)
	:
	RectF(topLeft, topLeft + Vec2(width, height))
{
}

bool RectF::IsOverlappingWith(const RectF& other) const
{
	return this->right >= other.left &&
		this->bottom >= other.up &&
		this->left <= other.right &&
		this->up <= other.bottom;
}