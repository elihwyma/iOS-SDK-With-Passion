/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBEnumValueOptions;

@interface TRIPBEnumValueDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (nonatomic) int number;
@property (nonatomic) _Bool hasNumber;
@property (retain, nonatomic) TRIPBEnumValueOptions *options;
@property (nonatomic) _Bool hasOptions;

+ (id)descriptor;

@end
