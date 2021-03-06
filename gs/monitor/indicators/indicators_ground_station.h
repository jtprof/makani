/*
 * Copyright 2020 Makani Technologies LLC
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

#ifndef GS_MONITOR_INDICATORS_INDICATORS_GROUND_STATION_H_
#define GS_MONITOR_INDICATORS_INDICATORS_GROUND_STATION_H_

#include <stdint.h>

#include "gs/monitor/widgets/indicator.h"

#ifdef __cplusplus
extern "C" {
#endif

void UpdateAirDensity(Indicator *ind, int32_t init);
void UpdateDrumState(Indicator *ind, int32_t init);
void UpdateWinchArmed(Indicator *ind, int32_t init);
void UpdateLevelwindElevation(Indicator *ind, int32_t init);
void UpdatePerchAzimuthEncoders(Indicator *ind, int32_t init);
void UpdateGsgAzimuth(Indicator *ind, int32_t init);
void UpdateGsgElevation(Indicator *ind, int32_t init);
void UpdatePlcStatus(Indicator *ind, int32_t init);
void UpdateWeather(Indicator *ind, int32_t init);
void UpdateWinchProximitySensor(Indicator *ind, int32_t init);
void UpdateWindSensor(Indicator *ind, int32_t init);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // GS_MONITOR_INDICATORS_INDICATORS_GROUND_STATION_H_
