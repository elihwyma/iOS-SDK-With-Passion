/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSMutableArray;

@interface TRIPBFieldOptions : TRIPBMessage

@property (nonatomic) int ctype;
@property (nonatomic) _Bool hasCtype;
@property (nonatomic) _Bool packed;
@property (nonatomic) _Bool hasPacked;
@property (nonatomic) int jstype;
@property (nonatomic) _Bool hasJstype;
@property (nonatomic) _Bool lazy;
@property (nonatomic) _Bool hasLazy;
@property (nonatomic) _Bool deprecated;
@property (nonatomic) _Bool hasDeprecated;
@property (nonatomic) _Bool weak;
@property (nonatomic) _Bool hasWeak;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (nonatomic, readonly) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
