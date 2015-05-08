#include "ZooAnimal.h"
#include "Species.h"
#include <iostream>
#include <vector>

int main() {

	std::vector<OSS::ZooAnimal> zoo;
	zoo.reserve(10);
	
	OSS::Tiger t("Tiggy", 6, 38, 2, 3);

	OSS::GriffonVulture gv("Vully", 3, 39, 2);

	zoo.push_back(t);

	std::cout << t << std::endl;
	std::cout << gv << std::endl;
}