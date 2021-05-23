/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray, NSString;

@interface TRITreatment : TRIPBMessage

@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) _Bool hasTreatmentId;
@property (copy, nonatomic) NSString *treatmentName;
@property (nonatomic) _Bool hasTreatmentName;
@property (copy, nonatomic) NSString *treatmentDescription;
@property (nonatomic) _Bool hasTreatmentDescription;
@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (nonatomic, readonly) unsigned long long factorLevelArray_Count;
@property (copy, nonatomic) NSString *cloudKitId;
@property (nonatomic) _Bool hasCloudKitId;

+ (id)descriptor;

@end
