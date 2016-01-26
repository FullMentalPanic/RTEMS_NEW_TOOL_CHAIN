#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (TARGET_CPU_v7)
#ifdef IN_GCC
# include "options.h"
# include "config/sparc/sparc.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/svr4.h"
# include "config/sparc/sysv4.h"
# include "config/sparc/sp-elf.h"
# include "config/sparc/rtemself.h"
# include "config/rtems.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */