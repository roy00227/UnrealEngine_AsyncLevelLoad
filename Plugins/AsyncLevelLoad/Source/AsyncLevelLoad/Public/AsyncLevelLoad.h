// Copyright 2023, roy00227, All rights reserved

#pragma once

#include "Modules/ModuleManager.h"

class FAsyncLevelLoadModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
