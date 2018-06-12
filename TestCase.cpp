#include "TestCase.hpp"

	TestCase::TestCase(string s, ostream &os){
		stream = &os;
		message = s; 
		pass=0;
		fail=0;
	}

	void TestCase::print(){
		(*stream) << message <<": "<< fail <<" failed, "<< pass <<" passed, "<< (pass+fail) <<" total."<<endl<<"---"<<endl;
	}    