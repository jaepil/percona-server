/* Copyright (c) 2023 Percona LLC and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   51 Franklin Street, Suite 500, Boston, MA 02110-1335 USA */

#ifndef MASKING_FUNCTIONS_DEFAULT_SQL_CONTEXT_BUILDER_HPP
#define MASKING_FUNCTIONS_DEFAULT_SQL_CONTEXT_BUILDER_HPP

#include "masking_functions/abstract_sql_context_builder.hpp"  // IWYU pragma: export

#include "masking_functions/command_service_tuple_fwd.hpp"

namespace masking_functions {

class default_sql_context_builder : public abstract_sql_context_builder {
 public:
  explicit default_sql_context_builder(const command_service_tuple &services)
      : abstract_sql_context_builder{services} {}

 private:
  sql_context_ptr do_build() const override;
};

}  // namespace masking_functions

#endif  // MASKING_FUNCTIONS_DEFAULT_SQL_CONTEXT_BUILDER_HPP
