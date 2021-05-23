/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBOneofOptions;

@interface TRIPBOneofDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (retain, nonatomic) TRIPBOneofOptions *options;
@property (nonatomic) _Bool hasOptions;

+ (id)descriptor;

@end
