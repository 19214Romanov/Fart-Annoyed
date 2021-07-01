#pragma once

#include "Vec2.h"

class RectF
{
	public:
		RectF() = default;
		RectF(float up_in, float bottom_in, float left_in, float right_in);
		RectF(const Vec2& topLeft, const Vec2& bottomRight);
		RectF(const Vec2& topLeft, float width, float height);
		bool IsOverlappingWith(const RectF& other) const;

	public:
		float up;
		float bottom;
		float left;
		float right;

};
