#pragma once

// Copyright 2016 Stellar Development Foundation and contributors. Licensed
// under the Apache License, Version 2.0. See the COPYING file at the root
// of this distribution or at http://www.apache.org/licenses/LICENSE-2.0

#include "ledger/LedgerManagerImpl.h"
#include "main/ApplicationImpl.h"

namespace stellar
{

Application::pointer
createTestApplication(VirtualClock& clock, Config const& cfg);

namespace testutil
{
void setCurrentLedgerVersion(LedgerManager& lm, uint32_t currentLedgerVersion);
}

time_t getTestDate(int day, int month, int year);
std::tm getTestDateTime(int day, int month, int year, int hour, int minute,
                        int second);
}
