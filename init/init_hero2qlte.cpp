/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "G935AZ")) {
		/* Cricket */
		property_set("ro.product.model", "SM-G935AZ");
		property_set("ro.product.name", "hero2qltecri");
	} else if (strstr(bootloader, "G935A")) {
		/* AT&T */
		property_set("ro.product.model", "SM-G935A");
		property_set("ro.product.name", "hero2qlteatt");
	} else if (strstr(bootloader, "G935T1")) {
		/* MetroPCS */
		property_set("ro.product.model", "SM-G935T1");
		property_set("ro.product.name", "hero2qltemtr");
	} else if (strstr(bootloader, "G935T")) {
		/* T-Mobile */
		property_set("ro.product.model", "SM-G935T");
		property_set("ro.product.name", "hero2qltetmo");
	} else if (strstr(bootloader, "G935P")) {
		/* Sprint */
		property_set("ro.product.model", "SM-G935P");
		property_set("ro.product.name", "hero2qltespr");
	} else if (strstr(bootloader, "G935R4")) {
		/* US Cellular */
		property_set("ro.product.model", "SM-G935R4");
		property_set("ro.product.name", "hero2qlteusc");
	} else if (strstr(bootloader, "G935R6")) {
		/* Verizon Rural LTE */
		property_set("ro.product.model", "SM-G935R6");
		property_set("ro.product.name", "hero2qltelru");
	} else if (strstr(bootloader, "G935R7")) {
		/* C-Spire Wireless */
		property_set("ro.product.model", "SM-G935R7");
		property_set("ro.product.name", "hero2qltespi");
	} else if (strstr(bootloader, "G935V")) {
		/* Verizon */
		property_set("ro.product.model", "SM-G935V");
		property_set("ro.product.name", "hero2qltevzw");
	} else if (strstr(bootloader, "G935U")) {
		/* all other variants become USA Unbranded */
		property_set("ro.product.model", "SM-G935U");
		property_set("ro.product.name", "hero2qlteue");
	}
	property_set("ro.product.device", "hero2qlte");
}
