<<<<<<< HEAD
/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

=======
>>>>>>> 5f10869 (compat: libhidlbase: add shim for missing constructor map symbol)
#include <hidl/Static.h>

namespace android {
namespace hardware {
namespace details {

// Deprecated; kept for ABI compatibility. Use getBnConstructorMap.
DoNotDestruct<BnConstructorMap> gBnConstructorMap{};

// Deprecated; kept for ABI compatibility. Use getBsConstructorMap.
DoNotDestruct<BsConstructorMap> gBsConstructorMap{};

<<<<<<< HEAD
}  // namespace details
}  // namespace hardware
}  // namespace android
=======
} // namespace details
} // namespace hardware
} // namespace android
>>>>>>> 5f10869 (compat: libhidlbase: add shim for missing constructor map symbol)
