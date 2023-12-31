/*
 * Copyright (C) 2016 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef android_hardware_gnss_V2_0_GnssUtil_H_
#define android_hardware_gnss_V2_0_GnssUtil_H_

#include <hardware/fused_location.h>
#include <hardware/gps.h>
#include <mediatek/gps_mtk.h>
#include <android/hardware/gnss/2.0/types.h>

namespace android {
namespace hardware {
namespace gnss {
namespace V2_0 {
namespace implementation {

/*
 * This method converts a GpsLocation struct to a GnssLocation
 * struct.
 */
V2_0::GnssLocation convertToGnssLocation2_0(GpsLocation_ext* location);
V1_0::GnssLocation convertToGnssLocation1_0(GpsLocation_ext* location);

/*
 * This method converts an FlpLocation struct to a GnssLocation
 * struct.
 */
GnssLocation convertToGnssLocation(FlpLocation* location);

}  // namespace implementation
}  // namespace V2_0
}  // namespace gnss
}  // namespace hardware
}  // namespace android

#endif
