/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, PUValueFilter, UIView;

@protocol PUTransitionViewAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface PUTransitionViewAnimator : NSObject

{
    struct {
        unsigned int respondsToDidUpdate:1;
        unsigned int respondsToWillEnd:1;
        unsigned int respondsToDidEnd:1;
    } _delegateFlags;
    _Bool _autoUpdates;
    _Bool _appliesScaleViaTransform;
    _Bool _shouldFinish;
    _Bool _shouldUseTargetAspectRatio;
    _Bool __isAutoUpdating;
    _Bool __isEnding;
    unsigned long long _direction;
    id <PUTransitionViewAnimatorDelegate> _delegate;
    double _progress;
    double _unfilteredProgress;
    UIView *_view;
    double _rampUpDuration;
    double __desiredRotation;
    double __desiredScale;
    double __desiredSizeMixFactor;
    double __currentRotation;
    double __currentScale;
    double __currentSizeMixFactor;
    double __targetScale;
    CADisplayLink *__autoUpdateDisplayLink;
    PUValueFilter *__rampUpFilter;
    PUValueFilter *__progressFilter;
    PUValueFilter *__shouldFinishFilter;
    struct CGPoint _currentTranslation;
    struct CGPoint _anchorPoint;
    struct CGPoint __desiredTranslation;
    struct CGRect _sourceFrame;
    struct CGRect _targetFrame;
    struct CGRect __targetAspectRatioSourceFrame;
}

@property (retain, nonatomic, setter=_setView:) UIView *view;
@property (nonatomic, setter=_setSourceFrame:) struct CGRect sourceFrame;
@property (nonatomic, setter=_setTargetFrame:) struct CGRect targetFrame;
@property (nonatomic, setter=_setAnchorPoint:) struct CGPoint anchorPoint;
@property (nonatomic, setter=_setShouldUseTargetAspectRatio:) _Bool shouldUseTargetAspectRatio;
@property (nonatomic, setter=_setRampUpDuration:) double rampUpDuration;
@property (nonatomic, setter=_setDirection:) unsigned long long direction;
@property (nonatomic, setter=_setProgress:) double progress;
@property (nonatomic, setter=_setUnfilteredProgress:) double unfilteredProgress;
@property (nonatomic, setter=_setShouldFinish:) _Bool shouldFinish;
@property (nonatomic, setter=_setDesiredTranslation:) struct CGPoint _desiredTranslation;
@property (nonatomic, setter=_setDesiredRotation:) double _desiredRotation;
@property (nonatomic, setter=_setDesiredScale:) double _desiredScale;
@property (nonatomic, setter=_setDesiredSizeMixFactor:) double _desiredSizeMixFactor;
@property (nonatomic, setter=_setCurrentTranslation:) struct CGPoint currentTranslation;
@property (nonatomic, setter=_setCurrentRotation:) double _currentRotation;
@property (nonatomic, setter=_setCurrentScale:) double _currentScale;
@property (nonatomic, setter=_setCurrentSizeMixFactor:) double _currentSizeMixFactor;
@property (nonatomic, setter=_setTargetAspectRatioSourceFrame:) struct CGRect _targetAspectRatioSourceFrame;
@property (nonatomic, setter=_setTargetScale:) double _targetScale;
@property (nonatomic, setter=_setAutoUpdating:) _Bool _isAutoUpdating;
@property (retain, nonatomic, setter=_setAutoUpdateDisplayLink:) CADisplayLink *_autoUpdateDisplayLink;
@property (retain, nonatomic, setter=_setRampUpFilter:) PUValueFilter *_rampUpFilter;
@property (retain, nonatomic, setter=_setProgressFilter:) PUValueFilter *_progressFilter;
@property (retain, nonatomic, setter=_setShouldFinishFilter:) PUValueFilter *_shouldFinishFilter;
@property (nonatomic, setter=_setEnding:) _Bool _isEnding;
@property (nonatomic) _Bool autoUpdates;
@property (nonatomic) _Bool appliesScaleViaTransform;
@property (weak, nonatomic) id <PUTransitionViewAnimatorDelegate> delegate;

- (void)_update;
- (id)initWithView:(id)arg1 sourceFrame:(struct CGRect)arg2 targetFrame:(struct CGRect)arg3 anchorPoint:(struct CGPoint)arg4 shouldUseTargetAspectRatio:(_Bool)arg5 rampUpDuration:(double)arg6 direction:(unsigned long long)arg7;
- (void)updateWithTranslation:(struct CGPoint)arg1 rotation:(double)arg2 scale:(double)arg3;
- (void)finishWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4;
- (void)cancelWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4;
- (void)cancelWithoutAnimation;
- (void)_updateAutoUpdateDisplayLink;
- (void)_autoUpdate:(id)arg1;
- (void)_endWithTranslationVelocity:(struct CGPoint)arg1 rotationVelocity:(double)arg2 scaleVelocity:(double)arg3 shouldBounce:(_Bool)arg4 finish:(_Bool)arg5 animated:(_Bool)arg6;

@end
