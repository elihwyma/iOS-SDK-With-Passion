/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <Foundation/NSObject.h>

@class AWSampleLogger;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionSampler : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _nextDeadline;
    _Bool _lastFaceMetadataValid;
    _Bool _unitTestSampling;
    int _currentState;
    AWSampleLogger *_sampleLogger;
    CDUnknownBlockType _stateChangedCallback;
    unsigned long long _samplingSuppressedMask;
    unsigned long long _lastTriggerTime;
    unsigned long long _lastPositiveDetectTime;
    unsigned long long _lastPollTimeoutTime;
    double _lastPitch;
    double _lastYaw;
    double _lastRoll;
    unsigned long long _lastOrientation;
}

@property (retain, nonatomic) AWSampleLogger *sampleLogger;
@property (copy) CDUnknownBlockType stateChangedCallback;
@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long samplingSuppressedMask;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) _Bool lastFaceMetadataValid;
@property (nonatomic) double lastPitch;
@property (nonatomic) double lastYaw;
@property (nonatomic) double lastRoll;
@property (nonatomic) unsigned long long lastOrientation;
@property (nonatomic, readonly) _Bool unitTestSampling;

- (id)init;
- (id)description;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)setUnitTestMode;
- (void)startDeadlineComputation;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (void)finishDeadlineComputation;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2;
- (id)initWithMask:(unsigned long long)arg1;

@end
