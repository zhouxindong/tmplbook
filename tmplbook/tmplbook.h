// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the TMPLBOOK_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// TMPLBOOK_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef TMPLBOOK_EXPORTS
#define TMPLBOOK_API __declspec(dllexport)
#else
#define TMPLBOOK_API __declspec(dllimport)
#endif

// This class is exported from the tmplbook.dll
class TMPLBOOK_API Ctmplbook {
public:
	Ctmplbook(void);
	// TODO: add your methods here.
};

extern TMPLBOOK_API int ntmplbook;

TMPLBOOK_API int fntmplbook(void);
