#include "Tweaks.h"

namespace Tweaks::JustPayFine
{
	struct PayFine
	{
		static void Thunk(RE::Actor* a_player, std::uintptr_t a_faction, [[maybe_unused]] bool a_goToJail, bool a_removeStolenItems)
		{
			return func(a_player, a_faction, a_player->IsInSpace() ? a_goToJail : false, a_removeStolenItems);
		}
		static inline REL::Relocation<decltype(Thunk)> func;
		static inline std::size_t                      idx{ 0x14B };
	};

	void Install()
	{
		stl::write_vfunc<PayFine>(RE::VTABLE::PlayerCharacter[25]);

		const REL::Relocation<std::uintptr_t> console{ REL::Offset(0x01AB32FC), 0xB9 };
		stl::write_thunk_call<PayFine>(console.address());  // Console

		const REL::Relocation<std::uintptr_t> papyrus{ REL::Offset(0x02A2DA60), 0x10 };
		stl::write_thunk_jump<PayFine>(papyrus.address());  // Papyrus

		logger::info("\tInstalled JustPayFine");
	}
}
