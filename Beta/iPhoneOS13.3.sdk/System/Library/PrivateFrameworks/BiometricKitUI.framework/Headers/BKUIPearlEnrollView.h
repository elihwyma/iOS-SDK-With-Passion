/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class AVPlayer, BKUIPearlCrossHairsView, BKUIPearlMovieLoopView, BKUIPearlPillContainerView, BKUIPearlPositioningGuideView, BKUIPearlVideoCaptureSession, CAShapeLayer, NSArray, NSDate, NSString, NSTimer, UIImageView, UILabel, UILayoutGuide;

@protocol BKUIPearlEnrollViewDelegate;

@interface BKUIPearlEnrollView : UIView

{
    BKUIPearlVideoCaptureSession *_videoCaptureSession;
    _Bool _didStartCapture;
    _Bool _activated;
    UIView *_cameraShadeView;
    _Bool _progressiveBlur;
    double _currentCorrectedPitch;
    _Bool _blurInProgress;
    UILabel *_repositionPhoneLabel;
    NSDate *_startTime;
    unsigned long long _frameCount;
    NSString *_debugFrameInformation;
    NSString *_debugTemplateInformation;
    NSString *_debugStatusInformation;
    double _pitchCorrectionSamples;
    double _pitchCorrection;
    unsigned long long _correctionSamplesCount;
    double _pitchMin;
    double _pitchMax;
    unsigned long long _fillHoldoffFrameCount;
    _Bool _stateTransitionInProgress;
    NSDate *_stateStart;
    NSTimer *_nudgeTimer;
    _Bool _nudging;
    unsigned long long _nudgesNudged;
    _Bool _nudgesPaused;
    AVPlayer *_tutorialPlayer;
    NSArray *_entryAnimationImages;
    _Bool _entryAnimationAlreadyRan;
    BKUIPearlCrossHairsView *_crossHairs;
    BKUIPearlPositioningGuideView *_positioningGuide;
    UIView *_circleMaskView;
    CAShapeLayer *_circleMaskLayer;
    UIView *_roundedRectMaskView;
    CAShapeLayer *_roundedRectMaskLayer;
    UILabel *_debugLabel;
    unsigned long long _pendingRaiseLowerGuidanceState;
    _Bool _raiseLowerGuidanceStatePending;
    NSTimer *_raiseLowerGuidanceDelayTimer;
    _Bool _debugOverlayVisible;
    _Bool _active;
    int _state;
    id <BKUIPearlEnrollViewDelegate> _delegate;
    UILayoutGuide *_portalLayoutGuide;
    UIImageView *_entryAnimationView;
    BKUIPearlMovieLoopView *_tutorialMovieView;
    BKUIPearlPillContainerView *_pillContainer;
    NSArray *_portalLayoutGuideConstraints;
}

@property (retain, nonatomic) UIImageView *entryAnimationView;
@property (retain, nonatomic) BKUIPearlMovieLoopView *tutorialMovieView;
@property (nonatomic) int state;
@property (retain, nonatomic) BKUIPearlPillContainerView *pillContainer;
@property (retain, nonatomic) NSArray *portalLayoutGuideConstraints;
@property (nonatomic) _Bool active;
@property (weak, nonatomic) id <BKUIPearlEnrollViewDelegate> delegate;
@property (nonatomic) _Bool debugOverlayVisible;
@property (nonatomic, readonly) UILayoutGuide *portalLayoutGuide;

- (void)dealloc;
- (void)setSuspended:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithProgress:(id)arg1;
- (void)startCapture;
- (void)_updateDebugOverlay;
- (id)previewLayer;
- (void)willDisappear;
- (void)setSplashImageView:(id)arg1;
- (double)percentOfPillsCompleted;
- (void)postEnrollDeActivate;
- (void)setState:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithVideoCaptureSession:(id)arg1;
- (void)setEntryAnimationImages:(id)arg1;
- (void)preEnrollActivate;
- (void)setNudgesPaused:(_Bool)arg1;
- (void)updateWithFaceState:(id)arg1;
- (void)setFailed;
- (void)setMovieViewHidden:(_Bool)arg1;
- (void)updateEntryAnimationViewForOrientationChange;
- (_Bool)useRegularPadLayout;
- (struct CGPoint)portalCenter;
- (_Bool)expectsRunningVideoCaptureSession:(id)arg1;
- (void)setPitch:(double)arg1 yaw:(double)arg2;
- (double)pillRingRadius;
- (void)_endAndCleanupEnrollSessionIfNeeded;
- (void)_stopNudgeTimer;
- (void)setCameraBlurred:(_Bool)arg1;
- (void)_startNudgeTimer;
- (void)_cleanupUIState;
- (void)_animateToEntryAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToTutorialWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToNeedsPositioningFromState:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_animateToNeedsCenterBinWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToFirstScanWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToFirstScanCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToSecondScanWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToSecondScanCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToFinishedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateToPartialCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatePortalLayoutGuide;
- (void)_animateToState:(int)arg1 fromState:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setState:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateCorrectionEstimates:(double)arg1 yaw:(double)arg2;
- (void)_updateRaiseLowerGuidanceLabelIfNeededForPitch:(double)arg1;
- (double)_progressiveBlurAmountForPitch:(double)arg1;
- (void)setCameraBlurAmount:(double)arg1 useShade:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_recordDataFrameWithFaceState:(id)arg1;
- (void)_setRaiseLowerGuidanceLabelState:(unsigned long long)arg1;
- (double)tutorialRingRadius;
- (double)portalRadius;
- (struct CGSize)tutorialMovieSize;
- (struct CGPoint)portalOffset;
- (id)_maskPathWithRadius:(double)arg1 inFrame:(struct CGRect)arg2;
- (void)_nudgeIfNecessary;
- (void)_runTutorialLoopWithDuration:(double)arg1 delay:(double)arg2 loopDelay:(double)arg3;
- (double)_nonOccludingCircleMaskRadius;
- (id)_enrollMaskPathWithRadius:(double)arg1;
- (struct CATransform3D)_needsPositioningPreviewTransform;
- (_Bool)_animateCircleMaskWithPositioningGuide;
- (struct CATransform3D)_scanningAndPartialCapturePreviewTransform;
- (void)_animateToScanningStateWithCompletion:(CDUnknownBlockType)arg1;
- (double)completedRingRadius;
- (double)_previewZoomLevel;

@end
