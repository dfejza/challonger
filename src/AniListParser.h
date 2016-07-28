#pragma once

#include <cpr\cpr.h>
#include <curl\curl.h>
#include <string>
#include <json.hpp>
#include <stdio.h>

class AniListParser {
public:
	AniListParser();
	std::string getCharacterImg(std::string charName);
	void renewToken();
private:
	std::string token;
	std::string clientId;
	std::string clientSecrete;
	int renewTime;
};
