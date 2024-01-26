#include <iostream>
#include <discord.h>

#include "RPC_Client.h"

using namespace std;

RPC_Client::~RPC_Client()
{

}

void RPC_Client::Initialize()
{

}

void RPC_Client::SetClientId(string clientId)
{
	this->clientId = clientId;
}