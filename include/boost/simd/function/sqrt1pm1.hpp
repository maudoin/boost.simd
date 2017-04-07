//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_SQRT1PM1_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_SQRT1PM1_HPP_INCLUDED

  /*!
    @ingroup group-arithmetic
    @defgroup real-sqrt1pm1 sqrt1pm1 (function object)

    This function object returns \f$\sqrt{1+x}-1\f$ and the
    result is accurate even for x  with small modulus

    @headerref{<boost/simd/function/sqrt1pm1.hpp>}

    @par Description

      @code
      IEEEValue sqrt1pm1(IEEEValue const& x);
      @endcode

    @see ( %real ) [log1p](@ref real-log1p), [expm1.](@ref real-expm1.)

    @par Example:

      @snippet sqrt1pm1.cpp sqrt1pm1

    @par Possible output:

      @snippet sqrt1pm1.txt sqrt1pm1
  **/

#include <boost/simd/function/scalar/sqrt1pm1.hpp>
#include <boost/simd/function/simd/sqrt1pm1.hpp>

#endif
