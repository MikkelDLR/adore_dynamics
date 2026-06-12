/********************************************************************************
 * Copyright (c) 2025 Contributors to the Eclipse Foundation
 *
 * See the NOTICE file(s) distributed with this work for additional
 * information regarding copyright ownership.
 *
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * https://www.eclipse.org/legal/epl-2.0
 *
 * SPDX-License-Identifier: EPL-2.0
 ********************************************************************************/

#pragma once

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <unordered_map>

namespace adore
{
namespace dynamics
{
enum LightState
{
  RED,
  YELLOW,
  GREEN,
  UNKNOWN
};

struct TrafficSignal
{
  double     x;
  double     y;
  int        signal_group_id;
  LightState state;

  TrafficSignal() {};
};

struct TrafficSignalSet
{
  std::unordered_map<size_t, TrafficSignal> signals;
};

} // namespace dynamics
} // namespace adore
