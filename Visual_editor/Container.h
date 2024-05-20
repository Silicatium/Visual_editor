//#pragma once
//#include <iostream>
//
//template <class AbstractClass>
//ref class CContainer {
//private:
//	int size;
//	int memory;
//	AbstractClass^^ array;
//	void checked_empty_container() {
//		if (size == 0) throw exception("Container is empty!");
//	}
//	int additional_memory = 50; //memory increase
//public:
//	CContainer() : size(0), memory(0), array(gcnew AbstractClass^ [0]) {}
//	CContainer(int size) : size(size), memory(size), array(gcnew AbstractClass^ [size]) {
//		for (int i = 0; i < size; i++) {
//			array[i] = gcnew AbstractClass();
//		}
//	}
//	CContainer(const CContainer% c) : size(c.size), memory(c.memory), array(gcnew AbstractClass^ [c.memory]) {
//		for (int i = 0; i < size; i++) {
//			array[i] = gcnew AbstractClass(^(c.array[i]));
//		}
//	}
//	~CContainer() {
//		size = 0;
//		memory = 0;
//	}
//	int get_size() {
//		return size;
//	}
//	int get_additional_memory() {
//		return additional_memory;
//	}
//	AbstractClass get_object(int index) {
//		//Return element in container
//		try {
//			this->checked_empty_container();
//			if (index >= 0 && index < size) return ^ array[index];
//			else if (index < 0 && -index <= size) return ^ array[size + index];
//			else return ^ array[size - 1];
//		}
//		catch (const exception& ex) {
//			//cout << ex.what() << endl;
//		}
//	}
//	void set_object(int index, AbstractClass element) {
//		//Set value by index
//		int parametr = 0; //for negative index
//		if (index < 0) parametr = size;
//		if ((index >= 0 && index < size) || (index < 0 && -index <= size)) {
//			^ array[index + parametr] = element;
//		}
//	}
//	void set_additional_memory(int quantity) {
//		if (quantity >= 10 && quantity <= 10000) additional_memory = quantity;
//	}
//	void push_back(AbstractClass element) {
//		size++;
//		if (memory >= size) array[size - 1] = gcnew AbstractClass(element);
//		else {
//			memory += additional_memory;
//			AbstractClass^^ temp_arr = gcnew AbstractClass ^ [size];
//			for (int i = 0; i < size - 1; i++) {
//				temp_arr[i] = gcnew AbstractClass(^ array[i]);
//			}
//			temp_arr[size - 1] = gcnew AbstractClass(element);
//			array = gcnew AbstractClass ^ [memory];
//			for (int i = 0; i < size; i++) {
//				array[i] = gcnew AbstractClass(^ temp_arr[i]);
//			}
//		}
//	}
//	void push_front(AbstractClass element) {
//		size++;
//		if (memory < size) {
//			memory += additional_memory;
//			AbstractClass^^ temp_arr = gcnew AbstractClass ^ [size];
//			temp_arr[0] = gcnew AbstractClass(element);
//			for (int i = 1; i < size; i++) {
//				temp_arr[i] = gcnew AbstractClass(^ array[i - 1]);
//			}
//			array = gcnew AbstractClass ^ [memory];
//			for (int i = 0; i < size; i++) {
//				array[i] = gcnew AbstractClass(^ temp_arr[i]);
//			}
//		}
//		else {
//			array[size - 1] = new AbstractClass();
//			for (int i = size - 1; i > 0; i--) {
//				^ array[i] = ^ array[i - 1];
//			}
//			^ array[0] = element;
//		}
//	}
//	void insert(int index, AbstractClass element) {
//		int parametr = 0; //for negative index
//		if (index < 0) parametr = size;
//		if (index + parametr >= 0 && index + parametr < size) {
//			size++;
//			if (memory < size) {
//				memory += additional_memory;
//				AbstractClass^^ temp_arr = gcnew AbstractClass ^ [size];
//				for (int i = 0; i < index + parametr; i++) {
//					temp_arr[i] = gcnew AbstractClass(^ array[i]);
//				}
//				temp_arr[index + parametr] = gcnew AbstractClass(element);
//				for (int i = index + parametr + 1; i < size; i++) {
//					temp_arr[i] = gcnew AbstractClass(^ array[i - 1]);
//				}
//				array = gcnew AbstractClass ^ [memory];
//				for (int i = 0; i < size; i++) {
//					array[i] = gcnew AbstractClass(^ temp_arr[i]);
//				}
//			}
//			else {
//				array[size - 1] = gcnew AbstractClass();
//				for (int i = size - 1; i > index + parametr; i--) {
//					^ array[i] = ^ array[i - 1];
//				}
//				^ array[index + parametr] = element;
//			}
//		}
//		else this->push_back(element);
//	}
//	void pop() {
//		if (size != 0) {
//			size--;
//		}
//	}
//	void remove(int index) {
//		int parametr = 0; //for negative index
//		if (index < 0) parametr = size;
//		if (index + parametr >= 0 && index + parametr < size) {
//			size--;
//			for (int i = index + parametr; i < size; i++) {
//				^ array[i] = ^ array[i + 1];
//			}
//		}
//	}
//	AbstractClass removeWithGet(int index) {
//		AbstractClass temp = this->get_object(index);
//		this->remove(index);
//
//		return temp;
//	}
//	void applyFunction(void function(AbstractClass)) {
//		for (int i = 0; i < size; i++) {
//			function(^ array[i]);
//		}
//
//	}
//};