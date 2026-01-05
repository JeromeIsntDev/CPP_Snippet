#pragma once

#ifndef _PRT_H_
#define _PRT_H_

#include <string>
#define string std::string

class iPrintable {
public:
	virtual string GetClassType() = 0;
};

#endif // !_PRT_H_