/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableDictionary, NSString, TRIApproval, TRIAssignment, TRIPBTimestamp, TRIRadar, TRIRollback;

@interface TRIDeployment : TRIPBMessage

@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) _Bool hasAssignment;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) _Bool hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) _Bool hasEndDate;
@property (copy, nonatomic) NSString *cloudKitId;
@property (nonatomic) _Bool hasCloudKitId;
@property (retain, nonatomic) TRIPBTimestamp *deploymentTimestamp;
@property (nonatomic) _Bool hasDeploymentTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *cloudKitExpirationDate;
@property (nonatomic) _Bool hasCloudKitExpirationDate;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (nonatomic) int deploymentType;
@property (nonatomic) _Bool hasDeploymentType;
@property (copy, nonatomic) NSString *deployedBy;
@property (nonatomic) _Bool hasDeployedBy;
@property (retain, nonatomic) TRIRadar *radar;
@property (nonatomic) _Bool hasRadar;
@property (retain, nonatomic) TRIApproval *approval;
@property (nonatomic) _Bool hasApproval;
@property (retain, nonatomic) TRIRollback *rollback;
@property (nonatomic) _Bool hasRollback;
@property (retain, nonatomic) NSMutableDictionary *treatmentCloudKitId;
@property (nonatomic, readonly) unsigned long long treatmentCloudKitId_Count;
@property (nonatomic) int previousDeploymentType;
@property (nonatomic) _Bool hasPreviousDeploymentType;

+ (id)descriptor;

@end
