void findAndReplaceAll(std::string & data, std::string toSearch, std::string replaceStr)
{
	// Get the first occurrence
	size_t pos = data.find(toSearch);
 
	// Repeat till end is reached
	while( pos != std::string::npos)
	{
		// Replace this occurrence of Sub String
		data.replace(pos, toSearch.size(), replaceStr);
		// Get the next occurrence from the current position
		pos =data.find(toSearch, pos + toSearch.size());
	}
}
std::string hoandoi(std::string x){
	std::string s1 = x.substr(0, 2);
	std::string s2 = x.substr(2, 4);
	std::string s3 = s1;
	s1 = s2;
	s2 = s3;
	return (s1 + s2);
}
std::string id(std::string x){
	int k;
	std::string s, sh;
	std::stringstream ss, ssh;
	size_t i = x.find('id=');
	s = x.substr(i+3, 4);
	ss << s;
	ss >> k;
	ssh << setfill('0') << setw(4) << std::hex << k;
	ssh >> sh;
	return sh;
	
}
std::string tdx(std::string x){
	int k;
	std::string s, sh;
	std::stringstream ss, ssh;
	size_t i = x.find('id=');
	s = x.substr(i+3, 4);
	ss << s;
	ss >> k;
	ssh << setfill('0') << setw(4) << std::hex << k;
	ssh >> sh;
	return sh;
	
}
std::string tdy(std::string x){
	int k;
	std::string s, sh;
	std::stringstream ss, ssh;
	size_t i = x.find('id=');
	s = x.substr(i+3, 4);
	ss << s;
	ss >> k;
	ssh << setfill('0') << setw(4) << std::hex << k;
	ssh >> sh;
	return sh;
	
}