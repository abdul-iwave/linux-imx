/*
 * Copyright 2019 NXP
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */

/*
 *
 * @file vpu_encoder_pm.h
 *
 */

#ifndef _VPU_ENCODER_PM_H_
#define _VPU_ENCODER_PM_H_

#include <linux/version.h>
#include <linux/pm_domain.h>
#include <linux/platform_device.h>

#include "vpu_encoder_b0.h"

int vpu_enc_attach_pm_domains(struct vpu_dev *dev);
void vpu_enc_detach_pm_domains(struct vpu_dev *dev);

#endif
