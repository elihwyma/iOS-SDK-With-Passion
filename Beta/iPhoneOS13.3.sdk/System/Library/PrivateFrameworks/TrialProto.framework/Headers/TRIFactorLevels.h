/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIFactorLevels : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *factorLevelArray;
@property (nonatomic, readonly) unsigned long long factorLevelArray_Count;

+ (id)descriptor;

@end
