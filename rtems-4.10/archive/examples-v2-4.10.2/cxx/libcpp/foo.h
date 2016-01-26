//
// $Id: foo.h,v 1.2 2009/08/06 23:42:04 joel Exp $
//

#ifndef _foo_h
#define _foo_h

#include <iostream>

class foo {
public	:
  int i ;

  foo() : i(0) {} ;
  foo( const int i0 ) : i(i0) {};

  friend std::ostream& operator << (std::ostream&,const foo&);
  friend std::ostream& operator << (std::ostream&,const foo*);
};

#endif
