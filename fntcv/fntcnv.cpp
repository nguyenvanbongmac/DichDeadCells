#include "ham.h"
#include <fstream>

int main(int argc, char* argv[]){
	fstream infile(argv[1], std::ios::in);
	string out = argv[1] + ".txt";
	fstream outfile(out, std::ios::out);
	std::tring x;
	getline(infile, x);
	x.erase(x.begin(), x.find('\n')+1);
	getline(infile, x);
	x.erase(x.begin(), x.find('\n')+1);
	getline(infile, x);
	x.erase(x.begin(), x.find('\n')+1);
	getline(infile, x);
	int i = 1, allchar = findchar(x);
	x.erase(x.begin(), x.find('\n')+1);
	
	do
	{
		getline(infile,x);
		outfile << id(x) << xadvandce(x) << xoffset(x) << yoffset(x) << tdx(x) << tdy(x) << width(x) << height(x) << "00";
		x.erase(x.begin(), x.find('\n')+1);
		i++;
	} while(i<allchar);
	infile.close();
	outfile.close();
}