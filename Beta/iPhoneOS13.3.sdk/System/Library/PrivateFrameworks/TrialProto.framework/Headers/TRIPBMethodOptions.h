/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBMethodOptions : TRIPBMessage

@property (nonatomic) _Bool deprecated;
@property (nonatomic) _Bool hasDeprecated;
@property (nonatomic) int idempotencyLevel;
@property (nonatomic) _Bool hasIdempotencyLevel;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
