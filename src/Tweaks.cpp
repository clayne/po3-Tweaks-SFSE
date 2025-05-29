#include "Tweaks.h"
#include "Settings.h"

namespace Tweaks
{
	void Install()
	{
		REX::INFO("[TWEAKS]");

		const auto tweaks = Settings::GetSingleton()->GetTweaks();

		if (tweaks.justPayFine) {
			JustPayFine::Install();
		}

		if (tweaks.grabWithoutStealing) {
			GrabWithoutStealing::Install();
		}

		if (tweaks.dontPickupReadBooks) {
			DontPickupBooks::Install();
		}

		if (tweaks.disableDockingIMOD) {
			DisableDockingIMOD::Install();
		}
	}
}
