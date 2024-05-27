#pragma once

using namespace System;

generic <typename AbstractClass>
ref class CContainer {
private:
	int size;
	int memory;
	array<AbstractClass>^ arr;
	int additional_memory = 50; //memory increase
public:
	CContainer() : size(0), memory(0), arr(gcnew array<AbstractClass>(0)) {}
	CContainer(int size) : size(size), memory(size), arr(gcnew array<AbstractClass>(size)) {}
	CContainer(const CContainer% c) : size(c.size), memory(c.size), arr(gcnew array<AbstractClass>(c.size)) {
		for (int i = 0; i < size; i++) {
			arr[i] = c.arr[i];
		}
	}
	virtual ~CContainer() {};
	int get_size() {
		return size;
	}
	AbstractClass get_object(int index) {
		//Return element in container
		if (index >= 0 && index < size) return arr[index];
		else if (index < 0 && -index <= size) return arr[size + index];
		else throw gcnew IndexOutOfRangeException();
	}
	void set_object(int index, AbstractClass element) {
		//Set value by index
		int parametr = 0; //for negative index
		if (index < 0) parametr = size;
		if ((index >= 0 && index < size) || (index < 0 && -index <= size)) {
			arr[index + parametr] = element;
		}
	}
	void push_back(AbstractClass element) {
		size++;
		if (memory >= size) arr[size - 1] = element;
		else {
			memory += additional_memory;
			array<AbstractClass>^ temp_arr = gcnew array<AbstractClass>(size);
			for (int i = 0; i < size - 1; i++) {
				temp_arr[i] = arr[i];
			}
			temp_arr[size - 1] = element;
			arr = gcnew array<AbstractClass>(memory);
			for (int i = 0; i < size; i++) {
				arr[i] = temp_arr[i];
			}
		}
	}
	void remove(AbstractClass object) {
		bool flag = false;
		size--;
		for (int i = 0; i < size; i++) {
			if (Equals(arr[i], object)) flag = true;
			if (flag) arr[i] = arr[i + 1];
		}
	}
};