/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSTimer, NSHashTable, NSString, NSUUID, SBHomeGestureSettings, SBViewMorphAnimatorContentClippingView, UIView;

@protocol SBViewMorphAnimatorDataSource;

@interface SBViewMorphAnimator : NSObject

{
    _Bool _automaticallyStartSourceAnimations;
    _Bool _automaticallyStartTargetAnimations;
    _Bool _invalidated;
    _Bool _sourceScaleAndPositionEnded;
    NSUUID *_uuid;
    UIView *_sourceView;
    UIView *_sourceContentView;
    UIView *_targetView;
    UIView *_targetContentView;
    id <SBViewMorphAnimatorDataSource> _targetDataSource;
    double _sourceFinalScale;
    double _targetCornerRadius;
    NSHashTable *_observers;
    long long _startedSourceAnimations;
    long long _completedSourceAnimations;
    long long _startedTargetAnimations;
    long long _completedTargetAnimations;
    CDUnknownBlockType _sourceAllAnimationsCompletionBlock;
    BSTimer *_animationTimeoutTimer;
    BSTimer *_sourceAnimationsCompletionContinueBlockTimeoutTimer;
    SBHomeGestureSettings *_homeGestureSettings;
    SBViewMorphAnimatorContentClippingView *_sourceContentClippingView;
    SBViewMorphAnimatorContentClippingView *_targetContentClippingView;
    struct CGPoint _sourceFinalCenter;
    struct CGRect _sourceContentFrame;
    struct CGRect _targetSourcePinningFrame;
    struct CGRect _targetFinalFrame;
    struct CGRect _sourceContentClippingViewInitialFrame;
    struct CGRect _targetContentClippingViewInitialFrame;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) long long startedSourceAnimations;
@property (nonatomic) long long completedSourceAnimations;
@property (nonatomic) long long startedTargetAnimations;
@property (nonatomic) long long completedTargetAnimations;
@property (nonatomic) _Bool invalidated;
@property (nonatomic) _Bool sourceScaleAndPositionEnded;
@property (copy, nonatomic) CDUnknownBlockType sourceAllAnimationsCompletionBlock;
@property (retain, nonatomic) BSTimer *animationTimeoutTimer;
@property (retain, nonatomic) BSTimer *sourceAnimationsCompletionContinueBlockTimeoutTimer;
@property (weak, nonatomic) SBHomeGestureSettings *homeGestureSettings;
@property (retain, nonatomic) SBViewMorphAnimatorContentClippingView *sourceContentClippingView;
@property (nonatomic) struct CGRect sourceContentClippingViewInitialFrame;
@property (retain, nonatomic) SBViewMorphAnimatorContentClippingView *targetContentClippingView;
@property (nonatomic) struct CGRect targetContentClippingViewInitialFrame;
@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIView *sourceContentView;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *targetContentView;
@property (weak, nonatomic) id <SBViewMorphAnimatorDataSource> targetDataSource;
@property (nonatomic) _Bool automaticallyStartSourceAnimations;
@property (nonatomic) _Bool automaticallyStartTargetAnimations;
@property (nonatomic, readonly) struct CGPoint sourceFinalCenter;
@property (nonatomic, readonly) double sourceFinalScale;
@property (nonatomic, readonly) struct CGRect sourceContentFrame;
@property (nonatomic, readonly) double targetCornerRadius;
@property (nonatomic, readonly) struct CGRect targetSourcePinningFrame;
@property (nonatomic, readonly) struct CGRect targetFinalFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)_reset;
- (void)_updateParameters;
- (id)initWithUUID:(id)arg1;
- (void)cancel:(CDUnknownBlockType)arg1;
- (void)interrupt:(CDUnknownBlockType)arg1;
- (void)noteSourceAnimationsDidEnd:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (_Bool)startSourceAnimations:(unsigned long long)arg1;
- (void)_resetAllAnimations;
- (void)_noteAnimatorWasCanceled;
- (void)_continueSourceAnimationsCompletionPendingBlock;
- (void)_noteAnimatorWasInterrupted;
- (void)_removeSourceClippingView;
- (_Bool)startTargetAnimations:(unsigned long long)arg1;
- (struct CGRect)_sourceContentFrameForSourceView:(id)arg1 withTargetDataSource:(id)arg2;
- (double)_sourceFinalScaleWithContentFrame:(struct CGRect)arg1 targetFinalFrame:(struct CGRect)arg2;
- (struct CGPoint)_source:(id)arg1 finalCenterWithFinalScale:(double)arg2 contentFrame:(struct CGRect)arg3 targetFinalFrame:(struct CGRect)arg4;
- (struct CGRect)_targetSourcePinningFrameWithSourceContentFrame:(struct CGRect)arg1 targetFinalFrame:(struct CGRect)arg2;
- (void)willStartSourceAnimations:(unsigned long long)arg1;
- (void)didEndSourceAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)willStartTargetAnimations:(unsigned long long)arg1;
- (void)didEndTargetAnimations:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)noteSourceAnimationsWillStart:(unsigned long long)arg1;
- (struct CGRect)_targetInitialClippingBoundsWithSourceContentFrame:(struct CGRect)arg1 sourceFinalScale:(double)arg2 targetViewBounds:(struct CGRect)arg3;
- (void)noteTargetAnimationsWillStart:(unsigned long long)arg1;
- (void)noteTargetAnimationsDidEnd:(unsigned long long)arg1 finished:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;
- (void)_checkAnimationsDependencies:(CDUnknownBlockType)arg1;
- (void)_handleHandoffTimeout;
- (_Bool)preflightCheck;

@end
