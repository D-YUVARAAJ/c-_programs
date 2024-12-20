#include<iostream>
#include<string>


int main(int argc,char* argv[])
{
	if(argc >2)
	{
		std::cout<<"multiple statements found."<<std::endl;
		return 1;
	}

	std::cout<<"argc:"<<argc<<std::endl;
	std::cout<<"argv[0]:"<<argv[0]<<std::endl;
	std::cout<<"argv[1]:"<<argv[1]<<std::endl; 


	/*this is good ,but we have to control the number of input given by the user , so give condition only till 2 argc that is argv[0] is ./run
	 argv[1] is filename.cpp
*/
}
