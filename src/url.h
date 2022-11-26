/*
 * url.h
 *
 *  Created on: 2022/11/26
 *      Author: LatteSyobon
 */

#ifndef URL_H_
#define URL_H_

#include <string>

class URL {
private:
	std::string url;
public:
	URL(std::string url);
	virtual ~URL();

	void Open();
};


#endif /* URL_H_ */
