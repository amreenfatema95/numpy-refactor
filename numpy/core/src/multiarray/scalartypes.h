#ifndef _NPY_SCALARTYPES_H_
#define _NPY_SCALARTYPES_H_

#include <numpy/noprefix.h>

NPY_NO_EXPORT void
initialize_numeric_types(void);

NPY_NO_EXPORT void
format_longdouble(char *buf, size_t buflen, longdouble val, unsigned int prec);

#if PY_VERSION_HEX >= 0x03000000
NPY_NO_EXPORT void
gentype_struct_free(PyObject *ptr);
#else
NPY_NO_EXPORT void
gentype_struct_free(void *ptr, void *arg);
#endif

NPY_NO_EXPORT int
_typenum_fromtypeobj(PyObject *type, int user);

NPY_NO_EXPORT void *
scalar_value(PyObject *scalar, NpyArray_Descr *descr);

NPY_NO_EXPORT int
NpyInterface_DescrNewFromType(int type, NpyArray_Descr *descr, void **interfaceRet);

NPY_NO_EXPORT int
NpyInterface_DescrNewFromWrapper(void *baseTmp, NpyArray_Descr *descr, void **interfaceRet);

#endif
