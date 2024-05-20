#pragma once
#include "CFigure.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CCircle : public CFigure {
private:
	int radius = 45;
public:
	CCircle() : CFigure() {}
	CCircle(int x, int y, Color color) : CFigure(x, y, color) {}
	CCircle(const CCircle% c) : CFigure(c), radius(c.radius) {}
	~CCircle() {}
	void draw(Graphics^ g) override {
		if (!selected) g->DrawEllipse(gcnew Pen(color, 3.f), x - radius, y - radius, 2 * radius, 2 * radius);
		else g->DrawEllipse(gcnew Pen(Color::Blue, 3.f), x - radius, y - radius, 2 * radius, 2 * radius);
	}
	bool check_entry(int mouse_X, int mouse_Y) override {
		return ((x - mouse_X) * (x - mouse_X) + (y - mouse_Y) * (y - mouse_Y)) <= radius * radius;
	}
};