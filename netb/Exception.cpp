/*
 * Copyright (C) 2010, Maoxu Li. Email: maoxu@lebula.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "Exception.hpp"

NETB_BEGIN

// Implement base error exception
const class ErrorClass& Exception::Class() const noexcept 
{
    return ErrorClass();
}

// System error
// Implement exception and error class
IMPLEMENT_EXCEPTION(SystemException, SystemError)
IMPLEMENT_ERROR_CLASS(SystemError, "SystemError", SystemException)

// Logic error
// Implement exception and error class
IMPLEMENT_EXCEPTION(LogicException, LogicError)
IMPLEMENT_ERROR_CLASS(LogicError, "LogicError", LogicException)

NETB_END
