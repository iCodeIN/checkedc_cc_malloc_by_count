#pragma once

#include "/opt/github/procedural/checkedc_cc/checkedc_cc.h"

#define cc_malloc_by_count(ArrayPointerType, ArrayPointer, MallocProcedure, ArrayElementsCount)\
  do {\
    ArrayPointer = MallocProcedure cc_opt(<ArrayPointerType>) ((ArrayElementsCount) * sizeof(ArrayPointerType));\
    ArrayPointerType value = ArrayPointer[(ArrayElementsCount)-1];\
  } while (0)

#define cc_calloc_by_count(ArrayPointerType, ArrayPointer, CallocProcedure, ArrayElementsCount)\
  do {\
    ArrayPointer = CallocProcedure cc_opt(<ArrayPointerType>) (1, (ArrayElementsCount) * sizeof(ArrayPointerType));\
    ArrayPointerType value = ArrayPointer[(ArrayElementsCount)-1];\
  } while (0)
