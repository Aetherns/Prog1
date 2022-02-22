//#include "../../GUI/Graph.h"
//#include "../../GUI/Simple_window.h"
#include "../../GUI/std_lib_facilities.h"

class B1 {
	public:
		void f() {cout << "B1::f()" << endl;}
		virtual void vf() {cout << "B1::vf()" << endl;}
		//virtual ~B1();
};
class D1 : public B1 {
	public:
		//D1();
		void vf() {cout << "D1::vf()"<<endl;}
		//~D1();
};

int main() {

	//using namespace Graph_lib;
	B1 B1_object;
	B1_object.f();
	B1_object.vf();
	cout << endl;

	D1 D1_object;
	D1_object.f();
	D1_object.vf();





}

