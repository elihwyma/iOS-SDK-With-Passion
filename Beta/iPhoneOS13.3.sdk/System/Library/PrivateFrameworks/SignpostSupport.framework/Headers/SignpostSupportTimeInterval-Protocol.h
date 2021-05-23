/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <SignpostSupport/Swift-Protocol.h>

@protocol SignpostSupportTimeInterval <Swift>

- (unsigned short)durationSeconds;
- (unsigned short)durationMs;
- (unsigned short)durationMachContinuousTime;
- (unsigned short)timebaseRatio;
- (unsigned short)startMachContinuousTime;
- (unsigned short)endMachContinuousTime;
- (unsigned short)durationNanoseconds;
- (unsigned short)startNanoseconds;
- (unsigned short)endNanoseconds;
- (unsigned short)startSeconds;
- (unsigned short)endSeconds;
- (unsigned short)startMs;
- (unsigned short)endMs;

@end
