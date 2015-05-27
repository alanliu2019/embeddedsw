/*
 * Copyright (C) 2014 - 2015 Xilinx, Inc.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * Use of the Software is limited solely to applications:
 * (a) running on a Xilinx device, or
 * (b) that interact with a Xilinx device through a bus or interconnect.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
 * OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 * Except as contained in this notice, the name of the Xilinx shall not be used
 * in advertising or otherwise to promote the sale, use or other dealings in
 * this Software without prior written authorization from Xilinx.
 */

/*********************************************************************
 * USB slaves data structures
 *********************************************************************/

#ifndef PM_USB_H_
#define PM_USB_H_

#include "pm_slave.h"

/*********************************************************************
 * Macros
 ********************************************************************/
/* Power states of USB */
#define PM_USB_STATE_OFF   0U
#define PM_USB_STATE_ON    1U
#define PM_USB_STATE_MAX   2U

/*********************************************************************
 * Structure definitions
 ********************************************************************/
/**
 * PmSlaveUsb - Structure used for Usb
 * @slv         Base slave structure
 * @PwrDn   Pointer to a power down pmu-rom handler
 * @PwrUp   Pointer to a power up pmu-rom handler
 */
typedef struct PmSlaveUsb {
	PmSlave slv;
	PmTranHandler PwrDn;
	PmTranHandler PwrUp;
} PmSlaveUsb;

/*********************************************************************
 * Global data declarations
 ********************************************************************/
extern PmSlaveUsb pmSlaveUsb0_g;
extern PmSlaveUsb pmSlaveUsb1_g;

#endif
