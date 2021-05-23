/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, MovingAverage, NSString;

@interface HMIMemorySampler : HMFObject

{
    long long _highWaterMark;
    HMFTimer *_tick;
    MovingAverage *_average;
}

@property (readonly) HMFTimer *tick;
@property (readonly) MovingAverage *average;
@property long long highWaterMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (id)init;
- (void)stop;
- (void)start;
- (void)timerDidFire:(id)arg1;

@end
