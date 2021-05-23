/*
 Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

#import <AttentionAwareness/AWAttentionSampler.h>

@class BKDevicePearl, BKFaceDetectOperation, NSObject, NSString;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionSampler : AWAttentionSampler

{
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    unsigned long long _operationCreateTime;
    unsigned long long _lastErrorTime;
    int _displayNotifyToken;
    _Bool _displayState;
    _Bool _smartCoverClosed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (int)currentState;
- (void)setCurrentState:(int)arg1;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(_Bool)arg2;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (void)setDisplayState:(_Bool)arg1;
- (id)initForUnitTest:(_Bool)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;
- (unsigned long long)nextSampleTimeForSamplingInterval:(unsigned long long)arg1;
- (unsigned long long)minimumAttentionSamplerErrorRetryTime;
- (void)shouldSample:(_Bool)arg1 withDeadline:(unsigned long long)arg2;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)arg1;
- (void)faceDetectStalled:(id)arg1;
- (void)finishingFaceDetect:(id)arg1;
- (void)cancelFaceDetect:(id)arg1;
- (void)updateFaceState:(int)arg1;
- (void)updateFaceState:(int)arg1 withFaceMetadata:(struct AWFaceDetectMetadata *)arg2;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)startStalledTimerForOperation:(id)arg1;
- (void)cancelStalledTimer;
- (void)updateSuppressedMaskWithDisplayState:(_Bool)arg1 smartCoverClosed:(_Bool)arg2;
- (void)setDisplayStateFromNotification;
- (id)unitTestSampler;

@end
