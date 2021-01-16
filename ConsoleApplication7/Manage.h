#pragma once
#include <map>
class Manage
{
private:
	int quantity;
	std::map<int,int> allAds;


public:
	std::map<int, int> getAllAds();
	void setAllAdsMap(); // z mySQL

protected:

};

