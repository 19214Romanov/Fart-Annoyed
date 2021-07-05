#pragma once

#include "Colors.h"
#include "Vec2.h"
#include "Graphics.h"
#include "Ball.h"
#include "Keyboard.h"


class Paddle
{
	public:
		Paddle(const Vec2& pos_in, float halfWidth_in, float halfHeight_in);
		void Draw(Graphics& gfx) const;
		bool DoBallCollision(Ball& ball) const;
		void DoWallCollision(const RectF& walls);
		void Update(const Keyboard& kbd, float dt);
		RectF GetRect() const;

	private:
		static constexpr float wingWidth = 10.0f;
		Color colorWing = Colors::Red;
		Color color = Colors::White;
		float speed = 300.0f;
		float halfWidth;
		float halfHeight;
		Vec2 pos;

};
