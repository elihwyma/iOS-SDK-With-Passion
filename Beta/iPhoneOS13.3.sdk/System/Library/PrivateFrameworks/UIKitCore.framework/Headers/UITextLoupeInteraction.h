/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteraction.h>

@class UIDelayedAction, UIResponder, UITextGestureTuning, _UITextLoupeResponderProxy;

__attribute__((visibility("hidden")))
@interface UITextLoupeInteraction : UITextInteraction

{
    Class _configuratorClass;
    UIDelayedAction *_delayedLoupeAction;
    UIDelayedAction *_delayedSelectionAction;
    _Bool _isShiftKeyBeingHeld;
    UITextGestureTuning *_gestureTuning;
    _Bool _hasPerformedInteraction;
    _Bool _didChangeSelection;
    struct CGPoint _initialPointFromPreviousInteraction;
    _UITextLoupeResponderProxy *_responderProxy;
}

@property (retain, nonatomic) _UITextLoupeResponderProxy *responderProxy;
@property (nonatomic) _Bool shouldUseLineThreshold;
@property (nonatomic) _Bool strongerBiasAgainstUp;
@property (nonatomic, readonly) UIResponder *responder;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (void)assertInitialVerticalOffset:(double)arg1 fromTopOfCaret:(double)arg2;
- (void)selectToHere:(id)arg1;
- (void)loupeGestureWithState:(long long)arg1 location:(CDUnknownBlockType)arg2 translation:(CDUnknownBlockType)arg3 velocity:(CDUnknownBlockType)arg4 modifierFlags:(long long)arg5 shouldCancel:(_Bool *)arg6;
- (void)_createGestureTuningIfNecessary;
- (void)_processGestureForCustomHighlighter:(id)arg1;
- (void)loupeGesture:(id)arg1;
- (void)canBeginDragCursor:(id)arg1;
- (void)finishSetup;
- (void)_performGestureType:(long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3 locationOfFirstTouch:(struct CGPoint)arg4;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
- (void)updateInitialPoint:(struct CGPoint)arg1;
- (void)setupDelayedLoupeActionWithInitialPoint:(struct CGPoint)arg1;
- (void)delayedDisplayLoupe:(id)arg1;
- (void)updateOrCancelDelayedLoupeActionWithPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (_Bool)translationIsWithinAllowableMovement:(struct CGPoint)arg1;
- (void)cancelDelayedLoupeActionIfNecessary;
- (void)delayedLoupeAction:(id)arg1;
- (void)delayedSelectionAction:(id)arg1;
- (id)initWithConfigurator:(Class)arg1;
- (void)willBeginExternalGesture;

@end
