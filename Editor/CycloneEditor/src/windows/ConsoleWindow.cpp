#include "ConsoleWindow.h"

#include "imgui/imgui.h"

#include "Debug.h"
#include "Input.h"

namespace CycloneEditor
{
	void ConsoleWindow::render() const
	{
		ImGui::Begin("Console");

		for (CycloneEngine::LogMessage* message : CycloneEngine::Debug::getMessages())
			message->render();

		ImGui::End();

		if (CycloneEngine::Input::keydown(CycloneEngine::Keycode::A))
			CycloneEngine::Debug::logError("test");
	}
}
