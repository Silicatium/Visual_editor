#pragma once
#include "CFigure.h"

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CCircle : public CFigure {
private:
	int side = 90;
public:
	CCircle() : CFigure() {}
	CCircle(int x, int y) : CFigure(x, y) {}
	CCircle(const CCircle% c) : CFigure(c), side(c.side) {}
	~CCircle() {
		side = 0;
	}
	void draw(Graphics^ g) override {
		if (selected) color = Color::Blue;
		else color = Color::Black;
		Pen^ pen = gcnew Pen(color, 3.f);
		g->DrawRectangle(pen, x - side / 2, y - side / 2, side, side);
	}
	bool check_entry(int mouse_X, int mouse_Y) override {
		int xl = x - side / 2;
		int yl = y - side / 2;
		return (xl <= mouse_X && yl <= mouse_Y && side + xl >= mouse_X && side + yl >= mouse_Y);
	}
};