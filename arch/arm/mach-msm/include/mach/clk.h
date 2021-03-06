/* Copyright (c) 2009, 2012 The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __MACH_CLK_H
#define __MACH_CLK_H

#define CLKFLAG_INVERT			0x00000001
#define CLKFLAG_NOINVERT		0x00000002
#define CLKFLAG_NONEST			0x00000004
#define CLKFLAG_NORESET			0x00000008
#define CLKFLAG_RETAIN			0x00000040
#define CLKFLAG_NORETAIN		0x00000080
#define CLKFLAG_SKIP_HANDOFF		0x00000100
#define CLKFLAG_MIN			0x00000400
#define CLKFLAG_MAX			0x00000800
#define CLKFLAG_IGNORE			0x10000000

struct clk_lookup;
struct clk;

enum clk_reset_action {
	CLK_RESET_DEASSERT	= 0,
	CLK_RESET_ASSERT	= 1
};

/* Rate is maximum clock rate in Hz */
int clk_set_max_rate(struct clk *clk, unsigned long rate);

/* Assert/Deassert reset to a hardware block associated with a clock */
int clk_reset(struct clk *clk, enum clk_reset_action action);

/* Set clock-specific configuration parameters */
int clk_set_flags(struct clk *clk, unsigned long flags);

#endif
