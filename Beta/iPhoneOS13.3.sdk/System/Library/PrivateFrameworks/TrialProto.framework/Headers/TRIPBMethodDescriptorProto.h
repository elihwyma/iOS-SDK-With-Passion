/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString, TRIPBMethodOptions;

@interface TRIPBMethodDescriptorProto : TRIPBMessage

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool hasName;
@property (copy, nonatomic) NSString *inputType;
@property (nonatomic) _Bool hasInputType;
@property (copy, nonatomic) NSString *outputType;
@property (nonatomic) _Bool hasOutputType;
@property (retain, nonatomic) TRIPBMethodOptions *options;
@property (nonatomic) _Bool hasOptions;
@property (nonatomic) _Bool clientStreaming;
@property (nonatomic) _Bool hasClientStreaming;
@property (nonatomic) _Bool serverStreaming;
@property (nonatomic) _Bool hasServerStreaming;

+ (id)descriptor;

@end
