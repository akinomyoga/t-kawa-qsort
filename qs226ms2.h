﻿/*=============================================================================
  Copyright (C) 2018 河村　知行 <t-kawa@crux.ocn.ne.jp>
  Copyright (C) 2018 yumetodo <yume-wikijp@live.jp>
  Distributed under the Boost Software License, Version 1.0.
  (See https://www.boost.org/LICENSE_1_0.txt)
=============================================================================*/
#ifndef INC_QS226ms2_H_
#define INC_QS226ms2_H_
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void qsort226ms2( void *base, size_t nel, size_t size,  int (*cmp)(const void *a, const void *b) );

#ifdef __cplusplus
}
#endif

#endif //INC_QS226ms2_H_
