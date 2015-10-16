//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_NGTZ_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_NGTZ_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!
  @ingroup group-predicates

    Computes is_ngtz value of its parameter.

  **/
  template<typename T> auto is_ngtz(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-predicates

      Function object tied to simd::is_ngtz

      @see simd::is_ngtz
    **/
    const boost::dispatch::functor<tag::is_ngtz_> is_ngtz = {};
  }
} }
#endif

#include <boost/simd/function/definition/is_ngtz.hpp>
#include <boost/simd/arch/common/scalar/function/is_ngtz.hpp>
//#include <boost/simd/arch/common/function/simd/is_ngtz.hpp>

#endif