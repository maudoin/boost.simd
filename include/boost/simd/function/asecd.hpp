//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_ASECD_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_ASECD_HPP_INCLUDED

  /*!
    @ingroup group-trigonometric
    @defgroup real-asecd asecd (function object)

    This function object returns the inverse secant
    in degree: \f$(180/\pi) \arccos(1/x)\f$.

    @headerref{<boost/simd/function/asecd.hpp>}

    @par Description

      @code
      IEEEValue asecd(IEEEValue const & x);
      @endcode

    @see ( %real ) [asec](@ref real-asec), [asecpi](@ref real-asecpi)

    @par Example:

      @snippet asecd.cpp asecd

    @par Possible output:

      @snippet asecd.txt asecd

  **/

#include <boost/simd/function/scalar/asecd.hpp>
#include <boost/simd/function/simd/asecd.hpp>

#endif
