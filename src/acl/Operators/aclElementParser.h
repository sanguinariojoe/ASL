/*
 * Advanced Simulation Library <http://asl.org.il>
 * 
 * Copyright 2015 Avtech Scientific <http://avtechscientific.com>
 *
 *
 * This file is part of Advanced Simulation Library (ASL).
 *
 * ASL is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, version 3 of the License.
 *
 * ASL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with ASL. If not, see <http://www.gnu.org/licenses/>.
 *
 */


#ifndef ACLELEMENTPARSER_H
#define ACLELEMENTPARSER_H

#include "../aclElementBase.h"


namespace acl
{

/// Parses \p statement by replacing occurrences of
/// element's \p names by corresponding \p element->str()
/// from elementNamePairs

class ElementParser: public ElementBase
{
	protected:
		vector<pair<Element, string> > elementNamePairs;
		string statement;
	public:
		ElementParser();
		void addElementNamePair(Element element, string name);
		void setStatement(string statement_);
		virtual string getName() const;
		virtual string getTypeSignature(const KernelConfiguration & kernelConfig) const;
		virtual string getLocalDeclaration(const KernelConfiguration & kernelConfig) const;
		virtual void addToKernelSource(vector<Element> & arguments,
		                               vector<Element> & localDeclarations) const;
		virtual void setAsArgument(cl::Kernel & kernel, unsigned int argumentIndex) const;
		virtual string str(const KernelConfiguration & kernelConfig) const;
};

} // namespace acl

#endif // ACLELEMENTPARSER_H
