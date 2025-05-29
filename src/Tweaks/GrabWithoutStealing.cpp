#include "Tweaks.h"

namespace Tweaks::GrabWithoutStealing
{
	// shortcircuit SendStealAlarm
	struct GetOwnedNoCrime
	{
		static bool thunk([[maybe_unused]] RE::ExtraDataList* a_extraDataList)
		{
			return true;
		}
		static inline REL::Relocation<decltype(thunk)> func;
	};

	void Install()
	{
		const REL::Relocation<std::uintptr_t> target{ REL::ID(102774), 0x3CB };  // PlayerCharacter::StartGrabObject DONE
		stl::write_thunk_call<GetOwnedNoCrime>(target.address());

		REX::INFO("\tInstalled GrabWithoutStealing");
	}
}
