//==================================================================================================
/**
  Copyright 2017 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_ACOSH_HPP_INCLUDED
#define BOOST_SIMD_TYPE_COMPLEX_FUNCTION_IMPL_ACOSH_HPP_INCLUDED

#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/type/complex/detail/hierarchy.hpp>
#include <boost/simd/type/complex/function/acos.hpp>
#include <boost/simd/type/complex/function/if_else.hpp>
#include <boost/simd/type/complex/function/mul_i.hpp>
#include <boost/simd/type/complex/function/mul_mi.hpp>
#include <boost/simd/function/all.hpp>
#include <boost/simd/function/is_lez.hpp>
#include <boost/simd/function/is_nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  namespace bs = boost::simd;

  BOOST_DISPATCH_OVERLOAD ( acosh_
                          , (typename A0)
                          , bd::cpu_
                          , bs::cmplx::complex_<A0>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
    {
      // acosh(a0) = +/-i acos(a0)
      // Choosing the sign of multiplier to give nt2::real(acosh(a0)) >= 0
      // we have compatibility with C99.
      A0 res = bs::cmplx::acos(a0);
      res = if_else(logical_notand(is_nan(res.imag), is_lez(res.imag)),
                    mul_i(res), mul_mi(res));
      return res;
    }
  };

  BOOST_DISPATCH_OVERLOAD ( cmplx_acosh_
                          , (typename A0)
                          , bd::cpu_
                          , bs::cmplx::complex_<A0>
                          )
  {
    BOOST_FORCEINLINE A0 operator()(A0 const& a0) const BOOST_NOEXCEPT
    {
      return bs::acosh(a0);
    }
  };

  BOOST_DISPATCH_OVERLOAD ( cmplx_acosh_
                          , (typename A0)
                          , bd::cpu_
                          , bd::generic_< bd::floating_<A0> >
                          )
  {
    using result_t  = cmplx::complex<A0>;
    BOOST_FORCEINLINE result_t operator()(A0 const& a0) const BOOST_NOEXCEPT
    {
      if (all(a0 >= One<A0>())) return result_t(bs::acosh(a0));
      return bs::acosh(result_t(a0, Zero<A0>()));
    }
  };

} } }

#endif
