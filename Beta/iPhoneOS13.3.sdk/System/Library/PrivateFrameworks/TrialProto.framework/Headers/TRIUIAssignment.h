/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIUIAssignment : TRIPBMessage

@property (nonatomic) unsigned int numBuckets;
@property (nonatomic) _Bool hasNumBuckets;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) _Bool hasTreatmentId;

+ (id)descriptor;

@end
