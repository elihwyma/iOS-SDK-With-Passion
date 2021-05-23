/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBAny;

@interface TRIPBOption : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) TRIPBAny *value;
@property (nonatomic) _Bool hasValue;

+ (id)descriptor;

@end
