#pragma once
#include "CFigure.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CCircle : public CFigure {
private:
	int radius = 45;
public:
	CCircle() : CFigure() {}
	CCircle(int x, int y) : CFigure(x, y) {}
	CCircle(const CCircle% c) : CFigure(c), radius(c.radius) {}
	~CCircle() {
		radius = 0;
	}
	void draw(Graphics^ g) override {
		if (selected) color = Color::Blue;
		else color = Color::Black;
		Pen^ pen = gcnew Pen(color, 3.f);
		g->DrawEllipse(pen, x - radius, y - radius, 2 * radius, 2 * radius);
	}
	bool check_entry(int mouse_X, int mouse_Y) override {
		return ((x - mouse_X) * (x - mouse_X) + (y - mouse_Y) * (y - mouse_Y)) <= radius * radius;
	}
};