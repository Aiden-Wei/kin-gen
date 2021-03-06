/**********************************************************
   This file was generated automatically: DO NOT MODIFY

    This header file is part of the user-code that
    implements a Taste function block component generated
    with the ESROCOS robot modeling tool.


  Delivered by: KU Leuven, Belgium, 2018
  Generated on: Fri Apr  6 15:44:44 2018 (UTC)
  Generated by:
  License:      BSD 2-clause

**********************************************************/

#ifndef __RM_TOOL_H_KINBLOCK_USER_CODE_IMPL__
#define __RM_TOOL_H_KINBLOCK_USER_CODE_IMPL__

#ifdef __cplusplus
extern "C" {
#endif

#include "../dataview/dataview-uniq.h"

typedef asn1SccBase_JointState asn1_t_jointstate;
typedef asn1SccWrappers_Quaterniond asn1_t_quat;
typedef asn1SccBase_Pose asn1_t_pose;
typedef asn1SccWrappers_Vector3d asn1_t_pos3;
typedef asn1SccWrappers_Quaterniond asn1_t_quat;
typedef asn1SccWrappers_Vector3d asn1_t_vec3;

/* ONLY declarations of functions used in the taste-usercode here */
/* Initialize model constants */
void load_model_constants();

int solver_fk1(const asn1SccBase_JointState *IN_joints, asn1SccBase_Pose *outval_1);

int solver_fk2(const asn1SccBase_JointState *IN_joints, asn1SccBase_Pose *outval_1);

int solver_ik1(const asn1SccBase_JointState *IN_q, const asn1SccWrappers_Vector3d *IN_vector, asn1SccBase_JointState *OUT_qd_ik);

int solver_ik2(const asn1SccWrappers_Vector3d *IN_position, const asn1SccWrappers_Quaterniond*IN_orientation, asn1SccBase_JointState*IN_guess, asn1SccBase_JointState *OUT_q_ik);

#ifdef __cplusplus
}
#endif

#endif // __RM_TOOL_H_KINBLOCK_USER_CODE_IMPL__

