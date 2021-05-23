/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, HMFUnfairLock, NSString;

@protocol HMICameraVideoFrameAnalyzer;

@interface HMICameraVideoFrameAnalyzerFactory : HMFObject

{
    HMFUnfairLock *_lock;
    id <HMICameraVideoFrameAnalyzer> _frameAnalyzer;
    HMFTimer *_watchdogTimer;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (retain, nonatomic) id <HMICameraVideoFrameAnalyzer> frameAnalyzer;
@property (readonly) HMFTimer *watchdogTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;
+ (id)eventConfidenceThresholdsHigh;
+ (id)eventConfidenceThresholdsMedium;

- (id)init;
- (void)timerDidFire:(id)arg1;
- (void)preAnalyze:(id)arg1;
- (void)warmStartModel;
- (id)analyze:(id)arg1 targetEventTypes:(long long)arg2 error:(id *)arg3;
- (double)modelTimeoutPreference;
- (id)getConfidenceThresholdPreferenceForKey:(id)arg1 defaultConfidenceThreshold:(double)arg2;
- (_Bool)ensureFrameAnalyzerWithError:(id *)arg1;

@end
