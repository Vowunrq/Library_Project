#pragma once
#include "Library.h"
class GuestAccount :public Library {
public:
	virtual void Search() override;
	void guestMenu();
};

