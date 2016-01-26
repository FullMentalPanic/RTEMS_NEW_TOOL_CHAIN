#
# BSP specific settings. To be included in application Makefiles
#

RTEMS_BSP = leon3

prefix = /opt/rtems-4.10
exec_prefix = /opt/rtems-4.10/sparc-rtems4.10

CC_FOR_TARGET = sparc-rtems4.10-gcc --pipe
CXX_FOR_TARGET = sparc-rtems4.10-g++
AS_FOR_TARGET = sparc-rtems4.10-as
AR_FOR_TARGET = sparc-rtems4.10-ar
NM_FOR_TARGET = sparc-rtems4.10-nm
LD_FOR_TARGET = sparc-rtems4.10-ld
SIZE_FOR_TARGET = sparc-rtems4.10-size
OBJCOPY_FOR_TARGET = sparc-rtems4.10-objcopy

CC= $(CC_FOR_TARGET)
CXX= $(CXX_FOR_TARGET)
AS= $(AS_FOR_TARGET)
LD= $(LD_FOR_TARGET)
NM= $(NM_FOR_TARGET)
AR= $(AR_FOR_TARGET)
SIZE= $(SIZE_FOR_TARGET)
OBJCOPY= $(OBJCOPY_FOR_TARGET)

export CC
export CXX
export AS
export LD
export NM
export AR
export SIZE
export OBJCOPY

RTEMS_CUSTOM = $(prefix)/make/custom/$(RTEMS_BSP).cfg
PROJECT_ROOT = $(prefix)
RTEMS_USE_OWN_PDIR = no
RTEMS_HAS_POSIX_API = yes
RTEMS_HAS_ITRON_API = no
RTEMS_HAS_CPLUSPLUS = yes

export RTEMS_BSP
export RTEMS_CUSTOM
export PROJECT_ROOT

# FIXME: The following shouldn't be here
RTEMS_ROOT = $(PROJECT_ROOT)
export RTEMS_ROOT
