/* Copyright (C) 2014 BMW Group
 * Author: Juergen Gehring (juergen.gehring@bmw.de)
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

#include <iostream>
#include "CMMethodCallsStub.h"

namespace v1 {
namespace commonapi {
namespace communication {

CMMethodCallsStub::CMMethodCallsStub() {
}

CMMethodCallsStub::~CMMethodCallsStub() {
}

void CMMethodCallsStub::testMethod(const std::shared_ptr<CommonAPI::ClientId> _client, uint8_t _x,
                                   testMethodReply_t _reply) {
    (void)_client;

    uint8_t y;

    std::cout << "testMethod called." << std::endl;
    y = _x;
    _reply(y);
}

} /* namespace v1 */
} /* namespace communication */
} /* namespace commonapi */

