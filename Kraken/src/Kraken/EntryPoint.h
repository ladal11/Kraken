#pragma once


#ifdef KK_PLATFORM_WINDOWS

extern Kraken::Application* Kraken::CreateApplication();

int main(int argc, char** argv) {
	auto app = Kraken::CreateApplication();
	app->Run();
	delete app;
}

#endif