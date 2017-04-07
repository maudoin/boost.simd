//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_LESS_EQUAL_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_LESS_EQUAL_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-is_less_equal is_less_equal (function object)

    This function object returns  [True](@ref constant-True)  or  [False](@ref constant-False) depending on whether x is
    less than or equal to y or not.

    Infix notation can be used with operator '<='.

    @headerref{<boost/simd/function/is_less_equal.hpp>}

    @par Description

      @code
      as_logical_t<Value> is_less_equal(Value const& x, Value const& y);
      @endcode

    @par Note

     Using `is_less_equal(x,y)` is equivalent to `x <= y`

    @par Example:

      @snippet is_less_equal.cpp is_less_equal

    @par Possible output:

      @snippet is_less_equal.txt is_less_equal

  **/

#include <boost/simd/function/scalar/is_less_equal.hpp>
#include <boost/simd/function/simd/is_less_equal.hpp>

#endif
