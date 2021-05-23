/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRITreatments : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *treatmentArray;
@property (nonatomic, readonly) unsigned long long treatmentArray_Count;

+ (id)descriptor;

@end
