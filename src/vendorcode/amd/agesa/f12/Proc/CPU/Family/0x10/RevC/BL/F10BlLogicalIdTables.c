/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD Family_10 BL Logical ID Table
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU/FAMILY/0x10
 * @e \$Revision: 44324 $   @e \$Date: 2010-12-22 17:16:51 +0800 (Wed, 22 Dec 2010) $
 *
 */
/*
 ******************************************************************************
 *
 * Copyright (c) 2011, Advanced Micro Devices, Inc.
 * All rights reserved.
 * 
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of 
 *       its contributors may be used to endorse or promote products derived 
 *       from this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ******************************************************************************
 */

/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "cpuRegisters.h"
#include "Filecode.h"
CODE_GROUP (G1_PEICC)
RDATA_GROUP (G1_PEICC)

#define FILECODE PROC_CPU_FAMILY_0X10_REVC_BL_F10BLLOGICALIDTABLES_FILECODE

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

STATIC CONST CPU_LOGICAL_ID_XLAT ROMDATA CpuF10BlLogicalIdAndRevArray[] =
{
  {
    0x1052,
    AMD_F10_BL_C2
  },
  {
    0x1053,
    AMD_F10_BL_C3
  }
};

VOID
GetF10BlLogicalIdAndRev (
     OUT   CONST CPU_LOGICAL_ID_XLAT **BlIdPtr,
     OUT   UINT8 *NumberOfElements,
     OUT   UINT64 *LogicalFamily,
  IN OUT   AMD_CONFIG_PARAMS *StdHeader
  )
{
  *NumberOfElements = (sizeof (CpuF10BlLogicalIdAndRevArray) / sizeof (CPU_LOGICAL_ID_XLAT));
  *BlIdPtr = CpuF10BlLogicalIdAndRevArray;
  *LogicalFamily = AMD_FAMILY_10_BL;
}

//CONST LOGICAL_ID_TABLE ROMDATA CpuF10BlLogicalIdAndRev =
//{
//  (sizeof (CpuF10BlLogicalIdAndRevArray) / sizeof (CPU_LOGICAL_ID_XLAT)),
//  (CPU_LOGICAL_ID_XLAT *) &CpuF10BlLogicalIdAndRevArray
//};

