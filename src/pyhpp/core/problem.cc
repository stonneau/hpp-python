// Copyright (c) 2018, Joseph Mirabel
// Authors: Joseph Mirabel (joseph.mirabel@laas.fr)
//
// This file is part of hpp-core.
// hpp-core is free software: you can redistribute it
// and/or modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation, either version
// 3 of the License, or (at your option) any later version.
//
// hpp-core is distributed in the hope that it will be
// useful, but WITHOUT ANY WARRANTY; without even the implied warranty
// of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Lesser Public License for more details.  You should have
// received a copy of the GNU Lesser General Public License along with
// hpp-core. If not, see <http://www.gnu.org/licenses/>.

#include <pyhpp/core/fwd.hh>

#include <boost/python.hpp>

#include <hpp/core/problem.hh>

#include <pyhpp/util.hh>

using namespace boost::python;

namespace pyhpp {
  namespace core {
    using namespace hpp::core;

    void exposeProblem ()
    {
      class_ <Problem> ("Problem", no_init)
        // PYHPP_DEFINE_GETTER_SETTER_INTERNAL_REF (Problem, robot, const DevicePtr_t&)
        .def ("robot", static_cast<const DevicePtr_t& (Problem::*) () const> (&Problem::robot), return_value_policy<return_by_value>())
        ;
    }
  }
}