/*
 * url.cpp
 *
 *  Created on: 2022/11/26
 *      Author: LatteSyobon
 */

#include "url.h"

#include <string>
#include <stdlib.h>

URL::URL(std::string url) {
	URL::url = url;

}

URL::~URL() {
	// TODO Auto-generated destructor stub
}

void URL::Open() {
	system(std::string("start "+URL::url).c_str());
}
