/*
 * Copyright (C) 2016 Swift Navigation Inc.
 * Contact: Jacob McNamee <jacob@swiftnav.com>
 *
 * This source is subject to the license found in the file 'LICENSE' which must
 * be be distributed together with this source. All other rights reserved.
 *
 * THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
 * EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "framer_none.h"

#include <string.h>

void framer_none_init(void *framer_none_state)
{

}

uint32_t framer_none_process(void *framer_none_state,
                             const uint8_t *data, uint32_t data_length,
                             const uint8_t **frame, uint32_t *frame_length)
{
  *frame = data_length > 0 ? data : NULL;
  *frame_length = data_length;
  return data_length;
}
