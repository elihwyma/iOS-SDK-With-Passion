/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPBStringValue : TRIPBMessage

@property (copy, nonatomic) NSString *value;

+ (id)descriptor;

@end
