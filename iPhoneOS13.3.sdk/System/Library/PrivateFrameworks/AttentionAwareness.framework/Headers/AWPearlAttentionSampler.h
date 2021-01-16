//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AttentionAwareness/AWAttentionSampler.h>

#import <AttentionAwareness/BKDevicePearlDelegate-Protocol.h>
#import <AttentionAwareness/BKFaceDetectOperationDelegate-Protocol.h>

@class BKDevicePearl, BKFaceDetectOperation, NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate>
{
    BKDevicePearl *_pearlDevice;
    BKFaceDetectOperation *_pendingPresenceOperation;
    BKFaceDetectOperation *_finishingPresenceOperation;
    NSObject<OS_dispatch_source> *_operationStalledTimer;
    NSUInteger _operationCreateTime;
    NSUInteger _lastErrorTime;
    int _displayNotifyToken;
    BOOL _displayState;
    BOOL _smartCoverClosed;
}

// - (void).cxx_destruct;
- (id)unitTestSampler;
- (void)operation:(id)arg1 presenceStateChanged:(BOOL)arg2;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)updateSamplingDeadline:(NSUInteger)arg1 forClient:(id)arg2;
- (int)currentState;
- (void)setSmartCoverClosed:(BOOL)arg1;
- (void)setDisplayState:(BOOL)arg1;
- (void)setDisplayStateFromNotification;
- (void)updateSuppressedMaskWithDisplayState:(BOOL)arg1 smartCoverClosed:(BOOL)arg2;
- (void)cancelStalledTimer;
- (void)startStalledTimerForOperation:(id)arg1;
- (NSUInteger)minimumAttentionSamplerErrorRetryTime;
- (NSUInteger)nextSampleTimeForSamplingInterval:(NSUInteger)arg1;
- (void)setCurrentState:(int)arg1;
- (void)pearlAttentionSamplerErrorOccurred;
- (void)updateFaceState:(int)arg1 withFaceMetadata:(struct AWFaceDetectMetadata )arg2;
- (void)updateFaceState:(int)arg1;
- (void)shouldSample:(BOOL)arg1 withDeadline:(NSUInteger)arg2;
- (void)cancelFaceDetect:(id)arg1;
- (void)finishingFaceDetect:(id)arg1;
- (void)faceDetectStalled:(id)arg1;
- (void)triggerFaceDetectWithDeadline:(NSUInteger)arg1;
- (id)init;
- (id)initForUnitTest:(BOOL)arg1;

@end
