// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor conj in std mode for double type with no decorator (regular call).
#include <simd_bench.hpp>
#include <complex>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

struct conj_bench
{
  template < class T >
  BOOST_FORCEINLINE std::complex<T> operator()(const std::complex<T> & a0)
    const BOOST_NOEXCEPT
  {
    return std::conj(a0);
  }
};

DEFINE_BENCH_MAIN()
{
  using T = std::complex<double>;
  run<T>(conj_bench(), nsbg::rand<T>(-10, 10, -10, 10));
}
