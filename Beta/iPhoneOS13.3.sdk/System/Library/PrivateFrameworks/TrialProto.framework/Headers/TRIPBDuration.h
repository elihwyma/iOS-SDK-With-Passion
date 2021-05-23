/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@interface TRIPBDuration : TRIPBMessage

@property (nonatomic) double timeInterval;
@property (nonatomic) double timeIntervalSince1970;
@property (nonatomic) long long seconds;
@property (nonatomic) int nanos;

+ (id)descriptor;

- (id)initWithTimeIntervalSince1970:(double)arg1;
- (id)initWithTimeInterval:(double)arg1;

@end
