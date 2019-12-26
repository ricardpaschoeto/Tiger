#pragma once

#ifdef TG_PLATFORM_WINDOWS

extern Tiger::Application* Tiger::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Tiger::CreateApplication();
	app->Run();
	delete app;

}

#endif 


