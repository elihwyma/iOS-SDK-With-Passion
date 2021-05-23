/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIPanGestureRecognizer, UIView, UIViewPropertyAnimator;

@protocol UITimingCurveProvider, _UISheetInteractionDelegate;

@interface _UISheetInteraction : NSObject <Swift>

{
    _Bool _enabled;
    _Bool _horizontalRubberBandingEnabled;
    NSArray *_detents;
    long long _indexOfCurrentDetent;
    double _rubberBandExtentBeyondMinimumOffset;
    double _rubberBandExtentBeyondMaximumOffset;
    id <UITimingCurveProvider> _timingCurve;
    id <_UISheetInteractionDelegate> _delegate;
    UIView *_view;
    NSMutableArray *_registeredPanGestureRecognizers;
    UIPanGestureRecognizer *_backgroundGestureRecognizer;
    id _dragSource;
    double _offsetWhenGestureBegan;
    double _unconstrainedOffset;
    UIViewPropertyAnimator *_propertyAnimator;
    struct CGPoint _currentOffset;
}

@property (weak, nonatomic) UIView *view;
@property (nonatomic, readonly) NSMutableArray *registeredPanGestureRecognizers;
@property (nonatomic, readonly) UIPanGestureRecognizer *backgroundGestureRecognizer;
@property (nonatomic, readonly) double minimumOffset;
@property (nonatomic, readonly) double maximumOffset;
@property (nonatomic, readonly) double offsetAtCurrentDetent;
@property (nonatomic) _Bool horizontalRubberBandingEnabled;
@property (retain, nonatomic) id dragSource;
@property (nonatomic, readonly, getter=isAnimating) _Bool animating;
@property (nonatomic) struct CGPoint currentOffset;
@property (retain, nonatomic) id <UITimingCurveProvider> timingCurve;
@property (nonatomic) double offsetWhenGestureBegan;
@property (nonatomic) double unconstrainedOffset;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (copy, nonatomic) NSArray *detents;
@property (nonatomic) long long indexOfCurrentDetent;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isDragging) _Bool dragging;
@property (nonatomic) double rubberBandExtentBeyondMinimumOffset;
@property (nonatomic) double rubberBandExtentBeyondMaximumOffset;
@property (nonatomic, readonly) struct CGPoint attachmentPoint;
@property (weak, nonatomic) id <_UISheetInteractionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)cancelDraggingIfNeeded;
- (void)registerPanGestureRecognizer:(id)arg1;
- (double)constrainedOffsetForUnconstrainedOffset:(double)arg1;
- (void)_setCurrentOffsetY:(double)arg1;
- (void)updateCurrentOffsetToCurrentDetent;
- (double)detentAtIndex:(long long)arg1;
- (double)rubberBandExtentForOffset:(double)arg1;
- (void)updateRegisteredPanGestureRecognizerEnabled:(id)arg1;
- (void)draggingCancelledInSource:(id)arg1;
- (void)handlePan:(id)arg1;
- (void)draggingBeganFromSource:(id)arg1;
- (void)draggingChangedInSource:(id)arg1 withTranslation:(struct CGPoint)arg2 animateChange:(_Bool)arg3;
- (void)draggingEndedInSource:(id)arg1 withVelocity:(double)arg2;
- (_Bool)_shouldInteractWithDescendentScrollView:(id)arg1 startOffset:(struct CGPoint)arg2 maxTopOffset:(double)arg3;
- (void)_setCurrentOffsetX:(double)arg1;
- (void)sendCurrentOffsetDidChange;
- (long long)indexOfDetentClosestToOffset:(double)arg1;
- (struct CGPoint)_scrollView:(id)arg1 adjustedUnconstrainedOffsetForUnconstrainedOffset:(struct CGPoint)arg2 startOffset:(struct CGPoint)arg3 horizontalVelocity:(inout double *)arg4 verticalVelocity:(inout double *)arg5 animator:(out id *)arg6;
- (void)_descendentScrollViewDidEndDragging:(id)arg1;
- (void)_descendentScrollViewDidCancelDragging:(id)arg1;
- (_Bool)_descendentScrollView:(id)arg1 shouldPreserveStartOffset:(struct CGPoint)arg2;
- (void)willMoveToView:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (void)unregisterPanGestureRecognizer:(id)arg1;

@end
