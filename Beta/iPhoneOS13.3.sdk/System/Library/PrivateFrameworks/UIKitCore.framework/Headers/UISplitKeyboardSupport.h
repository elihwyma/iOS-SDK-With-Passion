/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKeyboardMotionSupport.h>

#import <UIKitCore/Swift-Protocol.h>

@class CADisplayLink, NSString, UIPanGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UISplitKeyboardSupport : UIKeyboardMotionSupport <Swift>

{
    UIPanGestureRecognizer *_singleFingerPanRecognizer;
    UIPanGestureRecognizer *_twoFingerPanRecognizer;
    _Bool _isTranslating;
    _Bool _isSplitting;
    _Bool _splitLockState;
    struct CGPoint _targetTranslation;
    struct CGPoint _initialTranslation;
    struct CGPoint _translationVelocity;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    CDUnknownBlockType _bounceCompletionBlock;
}

@property (nonatomic, readonly) _Bool isTranslating;
@property (nonatomic, readonly) _Bool isSplitting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)transitionDidFinish:(_Bool)arg1;
- (void)prepareForTransition;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatedControllerApplicator:(id)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)willPerformPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (_Bool)startedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (_Bool)completedPlacementFrom:(id)arg1 to:(id)arg2 forController:(id)arg3;
- (void)translateToPlacement:(id)arg1 animated:(_Bool)arg2;
- (void)_updatedController;
- (void)_disconnectingController:(id)arg1;
- (void)_connectController:(id)arg1;
- (void)translateDetected:(id)arg1;
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;
- (void)cancelBounceAnimation;
- (void)translateToPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3;
- (void)invalidateDisplayLink;
- (void)_updateBounceAnimation:(id)arg1;
- (void)undock;
- (void)bounceAnimationDidFinish;
- (void)dock;

@end
