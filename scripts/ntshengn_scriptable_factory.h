// Auto-generated by generate_scriptable_factory.py from CMake

#pragma once
#include "../Core/Common/ecs/components/ntshengn_ecs_scriptable.h"
#include <string>

#include "camerascript.h"
#include "cubescript.h"

namespace NtshEngn {

	namespace ScriptableFactory {

		Scriptable createScriptable(const std::string& scriptName) {
			Scriptable scriptable;

			if (scriptName == "CameraScript") { scriptable.script = std::make_unique<CameraScript>(); }
			else if (scriptName == "CubeScript") { scriptable.script = std::make_unique<CubeScript>(); }

			return scriptable;
		}

	}

}