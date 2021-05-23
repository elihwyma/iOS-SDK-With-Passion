/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIFocusUpdateContext, _UIFocusAnimationConfiguration;

@interface UIFocusAnimationCoordinator : NSObject

{
    _Bool _locked;
    _UIFocusAnimationConfiguration *_focusingConfiguration;
    _UIFocusAnimationConfiguration *_unfocusingConfiguration;
    NSMutableArray *_focusingAnimations;
    NSMutableArray *_legacyFocusingAnimations;
    NSMutableArray *_unfocusingAnimations;
    NSMutableArray *_legacyUnfocusingAnimations;
    NSMutableArray *_focusingCompletions;
    NSMutableArray *_unfocusingCompletions;
    UIFocusUpdateContext *_focusUpdateContext;
    long long _activeFocusAnimation;
}

@property (retain, nonatomic) _UIFocusAnimationConfiguration *focusingConfiguration;
@property (retain, nonatomic) _UIFocusAnimationConfiguration *unfocusingConfiguration;
@property (nonatomic, readonly) NSMutableArray *focusingAnimations;
@property (nonatomic, readonly) NSMutableArray *legacyFocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *unfocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *legacyUnfocusingAnimations;
@property (nonatomic, readonly) NSMutableArray *focusingCompletions;
@property (nonatomic, readonly) NSMutableArray *unfocusingCompletions;
@property (nonatomic, readonly, getter=_focusUpdateContext) UIFocusUpdateContext *focusUpdateContext;
@property (copy, nonatomic, readonly, getter=_activeConfiguration) _UIFocusAnimationConfiguration *activeConfiguration;
@property (nonatomic, readonly, getter=_isLocked) _Bool locked;
@property (nonatomic, readonly, getter=_unfocusingRepositionAnimationDuration) double unfocusingRepositionAnimationDuration;
@property (nonatomic, readonly) long long activeFocusAnimation;
@property (nonatomic, readonly, getter=_animationOptions) unsigned long long animationOptions;
@property (nonatomic, readonly, getter=_animationDelay) double animationDelay;
@property (nonatomic, readonly, getter=_activeAnimationDuration) double activeAnimationDuration;
@property (nonatomic, readonly, getter=_focusingAnimationDuration) double focusingAnimationDuration;
@property (nonatomic, readonly, getter=_unfocusingAnimationDuration) double unfocusingAnimationDuration;

+ (id)_focusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_unfocusingAnimationCoordinatorWithConfiguration:(id)arg1 inContext:(id)arg2;
+ (id)_focusAnimationCoordinatorForAnimationType:(long long)arg1 withConfiguration:(id)arg2 inContext:(id)arg3;

- (id)init;
- (void)addCoordinatedAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animate;
- (id)_initWithFocusUpdateContext:(id)arg1;
- (void)_setConfiguration:(id)arg1 forFocusAnimation:(long long)arg2;
- (void)_prepareForFocusAnimation:(long long)arg1;
- (void)_configureWithFocusUpdateContext:(id)arg1;
- (id)_configurationForFocusAnimation:(long long)arg1;
- (void)addCoordinatedAnimationsForAnimation:(long long)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animateFocusAnimation:(long long)arg1;
- (void)_consumeBlocks:(id)arg1;
- (void)_consumeBlocks:(id)arg1 withAnimationContext:(id)arg2;
- (void)addCoordinatedFocusingAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addCoordinatedUnfocusingAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cancelFocusAnimation:(long long)arg1;

@end
