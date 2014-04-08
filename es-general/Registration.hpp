#ifndef IAUNS_ES_GENERAL_REGISTRATION_HPP
#define IAUNS_ES_GENERAL_REGISTRATION_HPP

#include <es-cereal/CerealCore.hpp>

namespace gen {

/// Registers all gameplay systems and components.
void registerAll(CPM_ES_CEREAL_NS::CerealCore& core);

} // namespace gen

#endif 
