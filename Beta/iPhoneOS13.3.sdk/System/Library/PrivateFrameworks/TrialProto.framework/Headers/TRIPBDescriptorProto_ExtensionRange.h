/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class TRIPBExtensionRangeOptions;

@interface TRIPBDescriptorProto_ExtensionRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) _Bool hasStart;
@property (nonatomic) int end;
@property (nonatomic) _Bool hasEnd;
@property (retain, nonatomic) TRIPBExtensionRangeOptions *options;
@property (nonatomic) _Bool hasOptions;

+ (id)descriptor;

@end
