/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBExtensionRangeOptions : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
