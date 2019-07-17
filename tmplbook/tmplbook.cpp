// tmplbook.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "tmplbook.h"


// This is an example of an exported variable
TMPLBOOK_API int ntmplbook=0;

// This is an example of an exported function.
TMPLBOOK_API int fntmplbook(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see tmplbook.h for the class definition
Ctmplbook::Ctmplbook()
{
    return;
}
