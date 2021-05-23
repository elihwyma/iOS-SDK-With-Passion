/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@interface TRIPBDescriptorProto_ReservedRange : TRIPBMessage

@property (nonatomic) int start;
@property (nonatomic) _Bool hasStart;
@property (nonatomic) int end;
@property (nonatomic) _Bool hasEnd;

+ (id)descriptor;

@end
