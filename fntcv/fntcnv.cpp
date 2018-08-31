#include "ham.h"
#include <fstream>

int main(int argc, char* argv[]){
	std::fstream infile(argv[1], std::ios::in);
	std::string out = argv[1];
	std::fstream outfile(out + ".txt", std::ios::out);
	std::string x;
	getline(infile, x);
	x.erase(0, x.find("\n")+1);
	getline(infile, x);
	x.erase(0, x.find("\n")+1);
	getline(infile, x);
	x.erase(0, x.find("\n")+1);
	getline(infile, x);
	int i = 1, allchar = findchar(x);
	x.erase(0, x.find("\n")+1);
	
	do
	{
		getline(infile,x);
		outfile << id(x) << xadvance(x) << xoffset(x) << yoffset(x) << tdx(x) << tdy(x) << width(x) << height(x) << "0000";
		x.erase(0, x.find("\n")+1);
		i++;
	} while(i<=allchar);
	infile.close();
	outfile.close();
}