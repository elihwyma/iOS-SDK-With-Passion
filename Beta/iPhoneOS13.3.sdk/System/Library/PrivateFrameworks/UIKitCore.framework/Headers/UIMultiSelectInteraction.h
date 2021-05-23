/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, UIView, _UIMultiSelectOneFingerPanGesture, _UISingleFingerTapExtensionGesture;

@protocol UIMultiSelectInteractionDelegate;

@interface UIMultiSelectInteraction : NSObject <Swift>

{
    _Bool _isScrollView;
    _Bool _delegateConformsToProtocol;
    struct {
        unsigned int respondsToShouldPreventDragLiftGesture:1;
        unsigned int respondsToShouldAllowSelectionExtensionAtPoint:1;
        unsigned int respondsToDidCancelMultiSelectInteraction:1;
        unsigned int respondsToShouldBeginMultiSelectInteraction:1;
    } _optionalDelegateFlags;
    _UIMultiSelectOneFingerPanGesture *_multiSelectModePan;
    UIPanGestureRecognizer *_multiFingerPan;
    UITapGestureRecognizer *_multiFingerTap;
    _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap;
    id <UIMultiSelectInteractionDelegate> _delegate;
    UIView *_view;
}

@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) _UIMultiSelectOneFingerPanGesture *_multiSelectModePan;
@property (retain, nonatomic) UIPanGestureRecognizer *_multiFingerPan;
@property (retain, nonatomic) UITapGestureRecognizer *_multiFingerTap;
@property (retain, nonatomic) _UISingleFingerTapExtensionGesture *_singleFingerExtensionTap;
@property (weak, nonatomic) id <UIMultiSelectInteractionDelegate> delegate;
@property (nonatomic) double singleTouchPanGestureHysteresis;
@property (nonatomic, readonly) NSArray *gesturesForFailureRequirements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_interactionDelegate;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (_Bool)multiSelectOneFingerPanGestureShouldPreventDragInteractionGesture:(id)arg1;
- (void)_handleCommonPanGestureStateChanged:(id)arg1;
- (void)_multiFingerTapGesture:(id)arg1;
- (void)_handleSelectionExtensionTapGesture:(id)arg1;
- (unsigned long long)_currentExtensionTypeForOneFingerTapGesture:(id)arg1;
- (void)_updateDelegateConformance;
- (_Bool)_isShiftKeyBeingHeldWithGesture:(id)arg1;
- (_Bool)_isCommandKeyBeingHeldWithGesture:(id)arg1;
- (_Bool)_attemptToAutomaticallyTransitionToMultiSelectModeIfNecessaryAtPoint:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (_Bool)_triggeredLegacyPathInsteadForGestureRecognizer:(id)arg1 velocity:(struct CGPoint)arg2 shouldBegin:(out _Bool *)arg3;
- (long long)_gestureTypeForGestureInstance:(id)arg1;
- (void)_beginCommonPan:(id)arg1;
- (void)_updateCommonPan:(id)arg1;
- (void)_endCommonPan:(id)arg1;
- (void)_cancelCommonPan:(id)arg1;
- (void)_askDelegateToAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg1 keepingSelection:(_Bool)arg2;
- (void)_cancelScrollingInViewForGesture:(id)arg1;
- (void)_beginObservingScrollViewOffsetUpdates;
- (void)_endObservingScrollViewOffsetUpdates;
- (void)_didInvokeMultiSelectAppendGestureAtLocation:(struct CGPoint)arg1;
- (void)_didInvokeMultiSelectExtendGestureAtLocation:(struct CGPoint)arg1;

@end
