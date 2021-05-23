/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, NSTimer, UIScrollView, _UIFocusEnginePanGestureRecognizer, _UIFocusFastScrollingTouchSequence;

@protocol _UIFocusFastScrollingRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRecognizer : NSObject

{
    _UIFocusEnginePanGestureRecognizer *_panGesture;
    _UIFocusFastScrollingTouchSequence *_currentTouch;
    NSMapTable *_swipeSequences;
    NSTimer *_swipeIntervalTimer;
    UIScrollView *_previewingScrollView;
    NSTimer *_previewingTouchTimer;
    unsigned long long _spatialFocusUpdateCount;
    _Bool _enabled;
    id <_UIFocusFastScrollingRecognizerDelegate> _delegate;
}

@property (weak, nonatomic) id <_UIFocusFastScrollingRecognizerDelegate> delegate;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)recognizerWithPanGesture:(id)arg1;

- (void)dealloc;
- (void)reset;
- (void)_handlePanGesture:(id)arg1;
- (void)focusEnginePanGesture:(id)arg1 touchBeganAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchMovedToDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchEndedAtDigitizerLocation:(struct CGPoint)arg2;
- (void)focusEnginePanGesture:(id)arg1 touchCancelledAtDigitizerLocation:(struct CGPoint)arg2;
- (void)directionalPressWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (void)joystickMovementWithHeading:(unsigned long long)arg1 didRepeat:(unsigned long long)arg2;
- (id)initWithPanGesture:(id)arg1;
- (void)_focusDidUpate:(id)arg1;
- (void)_updateActiveSwipeSequencesForScrollViews:(id)arg1;
- (id)_deepestEligibleScrollViewContainingFocusedItem:(unsigned long long)arg1;
- (void)_notifyDelegateWithScrollView:(id)arg1 scrollingStyle:(long long)arg2 heading:(unsigned long long)arg3;
- (void)_stopSwipeIntervalTimer;
- (_Bool)_attemptToImmediatelyRecognizeEdgeGesture;
- (void)_touchSequenceDidEnd:(id)arg1;
- (void)_deactivatePreviewingScrollViewIfNecessary;
- (unsigned long long)_bestHeadingForAccumulator:(struct CGVector)arg1;
- (void)_swipeOccuredAlongHeading:(unsigned long long)arg1;
- (_Bool)_swipeSequenceCanBeginFastScrolling:(id)arg1;
- (_Bool)_scrollViewIsEligibleForFastScrolling:(id)arg1 alongHeading:(unsigned long long)arg2;
- (void)_startSwipeIntervalTimer;
- (void)_swipeIntervalElapsed:(id)arg1;
- (id)_scrollViewsContainingCurrentlyFocusedItem;
- (void)_activatePreviewingScrollView;
- (void)_activatePreviewingScrollViewAfterDelay;

@end
