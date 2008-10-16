/*
 * SchemeShell.h
 *
 * Simple scheme shell
 * Copyright (c) 2008 Linas Vepstas <linas@linas.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License v3 as
 * published by the Free Software Foundation and including the exceptions
 * at http://opencog.org/wiki/Licenses
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program; if not, write to:
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef OPENCOG_SCHEME_SHELL_H
#define OPENCOG_SCHEME_SHELL_H
#ifdef HAVE_GUILE

#include <string>
#include "SchemeEval.h"

namespace opencog {

class SchemeShell
{
	private:
		SchemeEval evaluator;

		std::string normal_prompt;
		std::string pending_prompt;
		std::string abort_prompt;
		const std::string& get_prompt(void);
		bool show_output;

	public:
		SchemeShell(void);
		void hush_output(bool);
		std::string eval(const std::string &);
};

}

#endif/* HAVE_GUILE */
#endif /* OPENCOG_SCHEME_SHELL_H */
