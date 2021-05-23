/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIFactors : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorArray;
@property (nonatomic, readonly) unsigned long long factorArray_Count;

+ (id)descriptor;

@end
