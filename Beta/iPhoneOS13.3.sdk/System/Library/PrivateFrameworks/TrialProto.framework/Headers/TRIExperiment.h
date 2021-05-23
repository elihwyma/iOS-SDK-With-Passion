/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString, TRIAssignment, TRIPBTimestamp, TRIProjectOwner;

@interface TRIExperiment : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) _Bool hasExperimentId;
@property (copy, nonatomic) NSString *experimentName;
@property (nonatomic) _Bool hasExperimentName;
@property (copy, nonatomic) NSString *experimentDescription;
@property (nonatomic) _Bool hasExperimentDescription;
@property (nonatomic) int namespaceId;
@property (nonatomic) _Bool hasNamespaceId;
@property (retain, nonatomic) TRIProjectOwner *owner;
@property (nonatomic) _Bool hasOwner;
@property (retain, nonatomic) TRIPBTimestamp *createDate;
@property (nonatomic) _Bool hasCreateDate;
@property (retain, nonatomic) TRIPBTimestamp *lastModified;
@property (nonatomic) _Bool hasLastModified;
@property (nonatomic) unsigned int version;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) unsigned int compatibilityVersion;
@property (nonatomic) _Bool hasCompatibilityVersion;
@property (nonatomic) unsigned int seed;
@property (nonatomic) _Bool hasSeed;
@property (retain, nonatomic) NSMutableArray *deploymentArray;
@property (nonatomic, readonly) unsigned long long deploymentArray_Count;
@property (retain, nonatomic) NSMutableArray *treatmentArray;
@property (nonatomic, readonly) unsigned long long treatmentArray_Count;
@property (nonatomic) int status;
@property (nonatomic) _Bool hasStatus;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) _Bool hasStartDate;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (nonatomic) _Bool hasEndDate;
@property (copy, nonatomic) NSString *cloudKitId;
@property (nonatomic) _Bool hasCloudKitId;
@property (nonatomic) int deploymentType;
@property (nonatomic) _Bool hasDeploymentType;
@property (retain, nonatomic) TRIPBTimestamp *cloudKitExpirationDate;
@property (nonatomic) _Bool hasCloudKitExpirationDate;
@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) _Bool hasAssignment;

+ (id)descriptor;

@end
