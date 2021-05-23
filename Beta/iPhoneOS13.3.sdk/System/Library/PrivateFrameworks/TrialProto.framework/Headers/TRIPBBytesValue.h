/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSData;

@interface TRIPBBytesValue : TRIPBMessage

@property (copy, nonatomic) NSData *value;

+ (id)descriptor;

@end
