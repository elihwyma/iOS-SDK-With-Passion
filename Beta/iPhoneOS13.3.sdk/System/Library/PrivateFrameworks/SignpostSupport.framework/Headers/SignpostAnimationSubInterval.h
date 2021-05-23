/*
 Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SignpostAnimationSubInterval : NSObject

{
    unsigned long long _startMachContinuousTime;
    unsigned long long _endMachContinuousTime;
    double _timebaseRatio;
}

@property (nonatomic, readonly) double timebaseRatio;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (float)durationSeconds;
- (double)durationMs;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)startNanoseconds;
- (unsigned long long)endNanoseconds;
- (double)startSeconds;
- (double)endSeconds;
- (double)startMs;
- (double)endMs;
- (id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3;
- (id)initWithInterval:(id)arg1;

@end
