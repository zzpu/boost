//  (C) Copyright Gennadiy Rozental 2001-2015.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)
//
//  See http://www.boost.org/libs/test for the library home page.
//

//[snippet16
class const_string {
public:
  //...
  char operator[]( size_t index ) const;
  char at( size_t index ) const;
  //...
};
//]
