/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIExperiments : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *experimentArray;
@property (nonatomic, readonly) unsigned long long experimentArray_Count;

+ (id)descriptor;

@end
