//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_FNMA_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_FNMA_HPP_INCLUDED

  /*!
    @ingroup group-arithmetic
    @defgroup real-fnma fnma (function object)

    This function object computes the negated (fused) multiply add of
    its three parameters.

    @headerref{<boost/simd/function/fnma.hpp>}

    @par Description

      @code
      Value fnma(Value const& x, Value const& y, Value const& z);
      @endcode

    @par Decorators
    - pedantic_ ensures the fnma properties and allows SIMD acceleration if available.

    @par Notes
    The call `fnma(x, y, z)` is similar to `-x*y-z`

    But really conformant fused multiply/add also implies

    - only one rounding

    - no "intermediate" overflow

    fnma provides this for all integral types (however, using it on unsigned types
    is not recommanded for obvious reasons)  and also each time it is reasonable
    in terms of performance for floating ones (i.e. if the system has the hard
    wired capability).

    If you need pedantic fnma capabilities in all circumstances in your own
    code you can use the pedantic_ decorator (can be very expensive).

    @see ( %real ) [fms](@ref real-fms), [fma](@ref real-fma), [fnms](@ref real-fnms)

    @par Example:

      @snippet fnma.cpp fnma

    @par Possible output:

      @snippet fnma.txt fnma

  **/

#include <boost/simd/function/scalar/fnma.hpp>
#include <boost/simd/function/simd/fnma.hpp>

#endif
