/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSArray, UIViewFloatAnimatableProperty;

@protocol PKPaletteTransitionDelegate;

@interface PKPaletteTransition : NSObject

{
    id <PKPaletteTransitionDelegate> _delegate;
    long long _initialVisualState;
    long long _targetVisualState;
    long long _intermediateVisualState;
    long long _pointingDirection;
    NSArray *__remainingTransitionStages;
    UIViewFloatAnimatableProperty *_rotationAngleAnimatableProperty;
    UIViewFloatAnimatableProperty *_expandedToCollapsedAnimatableProperty;
}

@property (nonatomic, setter=_setTargetVisualState:) long long targetVisualState;
@property (nonatomic, setter=_setIntermediateVisualState:) long long intermediateVisualState;
@property (nonatomic, setter=_setPointingDirection:) long long pointingDirection;
@property (retain, nonatomic) NSArray *_remainingTransitionStages;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *rotationAngleAnimatableProperty;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *expandedToCollapsedAnimatableProperty;
@property (weak, nonatomic) id <PKPaletteTransitionDelegate> delegate;
@property (nonatomic, readonly, getter=isTransitionInProgress) _Bool transitionInProgress;
@property (nonatomic, readonly) long long initialVisualState;
@property (nonatomic, readonly) double expandedToCollapsedRatio;

- (id)initWithInitialVisualState:(long long)arg1;
- (void)transitionToVisualState:(long long)arg1;
- (void)paletteDidBeginRotationAnimation;
- (void)paletteDidBeginResizingAnimation;
- (void)_handleRotationAnimatablePropertyPresentationValueChanged;
- (void)_handleExpandedToCollapsedAnimatablePropertyPresentationValueChanged;
- (long long)_currentStage;
- (void)_moveToNextTransitionStageIfReady;
- (_Bool)_canMoveToNextTransitionStage;

@end
