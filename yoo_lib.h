#ifndef YOO_LIB_HEAD
#define YOO_LIB_HEAD

#ifdef Begin_NameSpace
#undef Begin_NameSpace
#endif
#define Begin_NameSpace(spaceName) namespace spaceName {

#ifdef End_NameSpace
#undef End_NameSpace
#endif
#define End_NameSpace(spaceName) }

#define YOO_OS		0x00
#define OS_LINUX	0x01
#define OS_UNIX		0x02
#define OS_MAC		0x04
#define OS_WIN		0x08
#define OS_POSIX	0x10


#define OS_BITS	(sizeof(uintptr_t)*8)

#ifdef 	_WIN32
#define YOO_OS  OS_WIN
#elif __APPLE__
#define YOO_OS	OS_MAC
#elif __unix
#define YOO_OS	OS_UNIX
#elif __linux
#define YOO_OS	OS_LINUX
#endif

#endif