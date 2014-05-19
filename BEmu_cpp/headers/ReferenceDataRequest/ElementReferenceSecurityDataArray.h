﻿//------------------------------------------------------------------------------
// <copyright project="BEmu_cpp" file="headers/ReferenceDataRequest/ElementReferenceSecurityDataArray.h" company="Jordan Robinson">
//     Copyright (c) 2013 Jordan Robinson. All rights reserved.
//
//     The use of this software is governed by the Microsoft Public License
//     which is included with this distribution.
// </copyright>
//------------------------------------------------------------------------------

#pragma once

#include "BloombergTypes/ElementPtr.h"
#include "Types/ObjectType.h"
#include <vector>
#include <map>

namespace BEmu
{
	class Name;

	namespace ReferenceDataRequest
	{
		class ElementReferenceSecurityDataArray : public ElementPtr
		{
			private:
				std::vector<ElementPtr*> _securities;

			public:
				ElementReferenceSecurityDataArray(const std::map<std::string, std::map<std::string, ObjectType>*>& securities);
				ElementReferenceSecurityDataArray(const ElementReferenceSecurityDataArray& arg);
				~ElementReferenceSecurityDataArray();

				virtual Name name() const;
				virtual size_t numValues() const;
				virtual size_t numElements() const;
				virtual SchemaElementDefinition elementDefinition() const;

				virtual ElementPtr * getValueAsElement(int index) const;
				virtual bool hasElement(const char* name, bool excludeNullElements = false) const;
				virtual ElementPtr * getElement(const char* name) const;

				virtual std::ostream& print(std::ostream& stream, int level = 0, int spacesPerLevel = 4) const;
		};
	}
}