//
//  $Id: foo1.cpp,v 1.2 2009/08/06 23:42:04 joel Exp $
//

#include "foo.h"

std::ostream& operator << ( std::ostream & strm, const foo *f )
{
  strm << f->i;
  return strm;
}
