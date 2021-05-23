/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBEnumOptions : TRIPBMessage

@property (nonatomic) _Bool allowAlias;
@property (nonatomic) _Bool hasAllowAlias;
@property (nonatomic) _Bool deprecated;
@property (nonatomic) _Bool hasDeprecated;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
