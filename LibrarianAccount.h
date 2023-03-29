#pragma once
#include "Library.h"
class LibrarianAccount :public Library {
public:
	virtual void Search() override;
	void librarianMenu();
};

