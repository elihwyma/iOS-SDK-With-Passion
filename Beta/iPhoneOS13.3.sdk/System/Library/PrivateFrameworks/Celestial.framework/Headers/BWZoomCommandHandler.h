/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWZoomDelayBuffer, NSArray;

@protocol BWZoomCompletionDelegate;

@interface BWZoomCommandHandler : NSObject

{
    struct os_unfair_lock_s _zoomLock;
    float _appliedZoomFactor;
    float _lastRequestedZoomFactor;
    _Bool _zoomFactorServiced;
    BWZoomDelayBuffer *_zoomDelayBuffer;
    _Bool _clientCanCompensateForDelay;
    id <BWZoomCompletionDelegate> _zoomCompletionDelegate;
    id <BWZoomCompletionDelegate> _zoomCompletionDelegateForStereoAudio;
    CDStruct_1b6d18a9 _lastFramePTSes[2];
    CDStruct_1b6d18a9 _rampStartTime;
    float _rampAcceleration;
    float _rampStartFactor;
    float _rampStartVelocity;
    float _rampTargetFactor;
    float _rampTargetVelocity;
    int _rampCommandID;
    _Bool _rampActive;
    int _rampType;
    double _rampDuration;
    float _rampSnapFraction;
    float _rampCurrentVelocity;
    float _rampZoomFactorOfInterest;
    NSArray *_fudgedZoomRanges;
    float _maxZoomFactorToApplyFudge;
    float _minZoomFactorToApplyFudge;
    float _maxFudgedZoomFactor;
    float _minFudgedZoomFactor;
}

@property float requestedZoomFactor;
@property (readonly) float requestedZoomFactorWithoutFudge;
@property (readonly) float appliedZoomFactor;
@property (readonly) float appliedZoomFactorWithoutFudge;
@property (readonly) float rampTargetZoomFactor;
@property (readonly) float rampZoomFactorOfInterest;
@property (nonatomic) id <BWZoomCompletionDelegate> zoomCompletionDelegate;
@property (nonatomic) id <BWZoomCompletionDelegate> zoomCompletionDelegateForStereoAudio;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (float)_applyFudgeToZoomFactor:(float)arg1;
- (float)_zoomFactorForRampAtPTS:(CDStruct_1b6d18a9)arg1 updateCurrentZoomRampState:(_Bool)arg2;
- (void)_activateRampMode:(_Bool)arg1;
- (float)_zoomFactorForDurationBasedRampAtPTS:(CDStruct_1b6d18a9)arg1 updateCurrentZoomRampState:(_Bool)arg2;
- (float)_zoomFactorForRateBasedRampAtPTS:(CDStruct_1b6d18a9)arg1 updateCurrentZoomRampState:(_Bool)arg2;
- (float)_zoomFactorForSpringBasedRampAtPTS:(CDStruct_1b6d18a9)arg1 updateCurrentZoomRampState:(_Bool)arg2;
- (float)applyFudgeToZoomFactor:(float)arg1;
- (void)setFudgedZoomRanges:(id)arg1;
- (void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 commandID:(int)arg6;
- (void)setTypicalISPZoomDelay:(unsigned int)arg1 clientCanCompensateForDelay:(_Bool)arg2;
- (float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2;
- (float)updateZoomModelForNextFrameWithPTS:(CDStruct_1b6d18a9)arg1;
- (_Bool)haveUpdatedZoomModelForPTS:(CDStruct_1b6d18a9)arg1;
- (void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1;

@end
