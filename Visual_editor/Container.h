#pragma once
#include <iostream>

using namespace std;

template <class AbstractClass>
class Container {
private:
	int size;
	int memory;
	AbstractClass** array;
	void checked_empty_container() {
		if (size == 0) throw exception("Container is empty!");
	}
	int additional_memory = 50; //memory increase
public:
	Container() : size(0), memory(0), array(new AbstractClass* [0]) {}
	Container(int size) : size(size), memory(size), array(new AbstractClass* [size]) {
		for (int i = 0; i < size; i++) {
			array[i] = new AbstractClass();
		}
	}
	Container(const Container& c) : size(c.size), memory(c.size), array(new AbstractClass* [c.memory]) {
		for (int i = 0; i < size; i++) {
			array[i] = new AbstractClass(*(c.array[i]));
		}
	}
	~Container() {
		for (int i = 0; i < size; i++) {
			delete array[i];
		}
		delete[] array;
	}
	int get_size() {
		return size;
	}
	int get_additional_memory() {
		return additional_memory;
	}
	AbstractClass get_object(int index) {
		//Return element in container
		try {
			this->checked_empty_container();
			if (index >= 0 && index < size) return *array[index];
			else if (index < 0 && -index <= size) return *array[size + index];
			else return *array[size - 1];
		}
		catch (const exception& ex) {
			cout << ex.what() << endl;
		}
	}
	void set_object(int index, AbstractClass element) {
		//Set value by index
		int parametr = 0; //for negative index
		if (index < 0) parametr = size;
		if ((index >= 0 && index < size) || (index < 0 && -index <= size)) {
			*array[index + parametr] = element;
		}
	}
	void set_additional_memory(int quantity) {
		if (quantity >= 10 && quantity <= 10000) additional_memory = quantity;
	}
	void push_back(AbstractClass element) {
		size++;
		if (memory >= size) array[size - 1] = new AbstractClass(element);
		else {
			memory += additional_memory;
			AbstractClass** temp_arr = new AbstractClass * [size];
			for (int i = 0; i < size - 1; i++) {
				temp_arr[i] = new AbstractClass(*array[i]);
				delete array[i];
			}
			temp_arr[size - 1] = new AbstractClass(element);
			delete[] array;
			array = new AbstractClass * [memory];
			for (int i = 0; i < size; i++) {
				array[i] = new AbstractClass(*temp_arr[i]);
				delete temp_arr[i];
			}
			delete[] temp_arr;
		}
	}
	void push_front(AbstractClass element) {
		size++;
		if (memory < size) {
			memory += additional_memory;
			AbstractClass** temp_arr = new AbstractClass * [size];
			temp_arr[0] = new AbstractClass(element);
			for (int i = 1; i < size; i++) {
				temp_arr[i] = new AbstractClass(*array[i - 1]);
				delete array[i - 1];
			}
			delete[] array;
			array = new AbstractClass * [memory];
			for (int i = 0; i < size; i++) {
				array[i] = new AbstractClass(*temp_arr[i]);
				delete temp_arr[i];
			}
			delete[] temp_arr;
		}
		else {
			array[size - 1] = new AbstractClass();
			for (int i = size - 1; i > 0; i--) {
				*array[i] = *array[i - 1];
			}
			*array[0] = element;
		}
	}
	void insert(int index, AbstractClass element) {
		int parametr = 0; //for negative index
		if (index < 0) parametr = size;
		if (index + parametr >= 0 && index + parametr < size) {
			size++;
			if (memory < size) {
				memory += additional_memory;
				AbstractClass** temp_arr = new AbstractClass * [size];
				for (int i = 0; i < index + parametr; i++) {
					temp_arr[i] = new AbstractClass(*array[i]);
					delete array[i];
				}
				temp_arr[index + parametr] = new AbstractClass(element);
				for (int i = index + parametr + 1; i < size; i++) {
					temp_arr[i] = new AbstractClass(*array[i - 1]);
					delete array[i - 1];
				}
				delete[] array;
				array = new AbstractClass * [memory];
				for (int i = 0; i < size; i++) {
					array[i] = new AbstractClass(*temp_arr[i]);
					delete temp_arr[i];
				}
				delete[] temp_arr;
			}
			else {
				array[size - 1] = new AbstractClass();
				for (int i = size - 1; i > index + parametr; i--) {
					*array[i] = *array[i - 1];
				}
				*array[index + parametr] = element;
			}
		}
		else this->push_back(element);
	}
	void pop() {
		size--;
		delete array[size];
	}
	void remove(int index) {
		int parametr = 0; //for negative index
		if (index < 0) parametr = size;
		if (index + parametr >= 0 && index + parametr < size) {
			size--;
			for (int i = index + parametr; i < size; i++) {
				*array[i] = *array[i + 1];
			}
			delete array[size];
		}
	}
	AbstractClass removeWithGet(int index) {
		AbstractClass temp = this->get_object(index);
		this->remove(index);

		return temp;
	}
	void applyFunction(void function(AbstractClass)) {
		for (int i = 0; i < size; i++) {
			function(*array[i]);
		}

	}
};