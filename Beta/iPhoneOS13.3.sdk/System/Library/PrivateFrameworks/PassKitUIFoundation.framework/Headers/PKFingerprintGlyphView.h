/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <UIKit/UIView.h>

@class CALayer, NSArray, NSMutableArray, NSString, UIColor;

@protocol PKFingerprintGlyphViewDelegate;

@interface PKFingerprintGlyphView : UIView

{
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    _Bool _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _rotatingRing;
    NSString *_rotationAnimationKey;
    _Bool _fadeOnRecognized;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    long long _state;
    CALayer *_contentLayer;
    id <PKFingerprintGlyphViewDelegate> _delegate;
}

@property (copy, nonatomic) UIColor *primaryColor;
@property (copy, nonatomic) UIColor *secondaryColor;
@property (nonatomic) _Bool fadeOnRecognized;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) CALayer *contentLayer;
@property (weak, nonatomic) id <PKFingerprintGlyphViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;
- (void)setState:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setProgress:(double)arg1 withDuration:(double)arg2;
- (void)setContentLayerOpacity:(double)arg1 withDuration:(double)arg2;
- (void)_applyPrimaryColorAnimated:(_Bool)arg1;
- (void)_applySecondaryColorAnimated:(_Bool)arg1;
- (void)_restartRotationIfNecessary;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (void)_setRingState:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1;
- (void)_updateRotationAnimationsIfNecessary;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2;
- (id)pathStateForLayer:(id)arg1;
- (void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3;
- (void)_startRotationAnimation;
- (void)_endRotationAnimation;
- (void)_applyColor:(struct UIColor *)arg1 toShapeLayers:(id)arg2 animated:(_Bool)arg3;
- (void)setSecondaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)setRecognizedIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;

@end
