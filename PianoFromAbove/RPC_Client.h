#pragma once

#include <string>
#include <discord.h>

using namespace std;

class RPC_Client
{
private:
		string clientId;
		discord::Core* core{};
public:
		~RPC_Client();
		void Initialize();
		void SetClientId(string clientId);
};