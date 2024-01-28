// Auto-generated by generate_scriptable_factory.py from CMake

#pragma once
#include "../Core/Common/ecs/components/ntshengn_ecs_scriptable.h"
#include <string>

#include "camerascript.h"
#include "clownscript.h"
#include "gamecontrollerscript.h"
#include "signscript.h"
#include "titlecontrollerscript.h"

namespace NtshEngn {

	namespace ScriptableFactory {

		Scriptable createScriptable(const std::string& scriptName) {
			Scriptable scriptable;

			if (scriptName == "CameraScript") { scriptable.script = std::make_unique<CameraScript>(); }
			else if (scriptName == "ClownScript") { scriptable.script = std::make_unique<ClownScript>(); }
			else if (scriptName == "GameControllerScript") { scriptable.script = std::make_unique<GameControllerScript>(); }
			else if (scriptName == "SignScript") { scriptable.script = std::make_unique<SignScript>(); }
			else if (scriptName == "TitleControllerScript") { scriptable.script = std::make_unique<TitleControllerScript>(); }

			return scriptable;
		}

	}

}