#pragma once
#pragma execution_character_set("utf-8")
#include <Windows.h>
#include <stdio.h>
int messBoxPrint(char*sz_formart, ...)
{
	char Buf[1024];
	va_list args;
	va_start(args, sz_formart);
	vsprintf_s(Buf,  sz_formart,  args);
	va_end(args);
	MessageBox(NULL, Buf, "test", MB_OK);
	return 0;
}
int CALLBACK WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	messBoxPrint("%d,%s", 1, "haha");
	return 0;
}