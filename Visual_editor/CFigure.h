#pragma once

using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class CFigure {
protected:
	int x;
	int y;
	bool selected = true;
	Color color;
public:
	CFigure() : x(0), y(0) {}
	CFigure(int x, int y) : x(x), y(y) {}
	CFigure(const CFigure% c) : x(c.x), y(c.y) {}
	virtual ~CFigure() {
		x = 0;
		y = 0;
	}
	virtual void draw(Graphics^ g) = 0;
	virtual bool check_entry(int mouse_X, int mouse_Y) = 0;
	void clicked() {
		selected = !selected;
	}
	bool check_selected() {
		return selected;
	}
};