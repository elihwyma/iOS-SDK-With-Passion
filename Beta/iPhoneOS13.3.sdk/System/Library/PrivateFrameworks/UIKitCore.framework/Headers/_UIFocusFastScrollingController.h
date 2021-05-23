/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSArray, NSTimer, UIPanGestureRecognizer, UIScrollView, _UIDynamicAnimationGroup, _UIDynamicValueAnimation, _UIFocusEngineJoystickGestureRecognizer, _UIFocusFastScrollingIndexBarEntry, _UIFocusFastScrollingIndexBarView;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingController : NSObject

{
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGesture;
    NSArray *_pressGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;
    _UIDynamicValueAnimation *_animationX;
    _UIDynamicValueAnimation *_animationY;
    _UIDynamicAnimationGroup *_animationGroup;
    long long _style;
    struct CGPoint _offsetWhenPanStarted;
    CDStruct_5e2aa800 _previousPanVelocity;
    unsigned long long _accelerationSwipeCount;
    double _accelerationMultiplier;
    double _accelerationStartMultiplier;
    double _accelerationLastSwipeTime;
    NSArray *_displayedEntries;
    double _initialEdgeDigitizerLocation;
    long long _initialIndexEntry;
    long long _highlightedIndexEntry;
    CDStruct_5e2aa800 _initialVelocity;
    unsigned long long _heading;
    unsigned long long _allowedHeadings;
    CADisplayLink *_pressAnimationDisplayLink;
    CDStruct_5e2aa800 _pressAnimationVelocity;
    struct CGVector _pressForce;
    double _scrollHighlight;
    NSTimer *_cooldownTimer;
    struct {
        unsigned int isDragging:1;
        unsigned int isDecelerating:1;
        unsigned int isInTrackingMode:1;
        unsigned int isIndicatingDestination:1;
        unsigned int isAttemptingToStop:1;
        unsigned int isCancellingScrollAnimation:1;
    } _flags;
    NSArray *_indexEntries;
    _UIFocusFastScrollingIndexBarView *_indexBarView;
}

@property (weak, nonatomic, readonly) UIScrollView *scrollView;
@property (copy, nonatomic) NSArray *indexEntries;
@property (nonatomic, readonly) _UIFocusFastScrollingIndexBarView *indexBarView;
@property (nonatomic, readonly, getter=isDragging) _Bool dragging;
@property (nonatomic, readonly, getter=isDecelerating) _Bool decelerating;
@property (nonatomic, readonly, getter=isScrollingX) _Bool scrollingX;
@property (nonatomic, readonly, getter=isScrollingY) _Bool scrollingY;
@property (nonatomic, readonly) long long scrollingStyle;
@property (nonatomic, readonly) _UIFocusFastScrollingIndexBarEntry *highlightedEntry;

+ (long long)indexOfEntryNearestToScrollViewBounds:(struct CGRect)arg1 inDisplayedEntries:(id)arg2;
+ (id)indexBarViewForScrollView:(id)arg1;
+ (id)controllerWithRequest:(id)arg1;

- (void)stop;
- (void)start;
- (void)_start;
- (void)_handlePanGesture:(id)arg1;
- (void)_handleJoystickGesture:(id)arg1;
- (void)_resetSwipeAcceleration;
- (void)_configureWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (_Bool)_shouldShowEntriesInIndexBar;
- (void)_stopDueToExternalEvent;
- (void)_handlePanBegin:(id)arg1;
- (void)_handlePanChanged:(id)arg1;
- (void)_handlePanEnd:(id)arg1;
- (void)_attemptToStop;
- (void)_startTrackingModeIfNecessary;
- (void)_stopScrollingAnimation;
- (void)_cancelCooldown;
- (void)_handleEdgePanBegin:(id)arg1;
- (void)_handleSwipePanBegin:(id)arg1;
- (void)_handleEdgePanChanged:(id)arg1;
- (void)_handleSwipePanChanged:(id)arg1;
- (void)_handleEdgePanEnd:(id)arg1;
- (void)_handleSwipePanEnd:(id)arg1;
- (void)_startEdgeGesture;
- (void)_updateEdgeGesture;
- (void)_beginCooldownWithDuration:(double)arg1;
- (void)_hideDestinationIndicators;
- (void)_interpretDigitzerLocation:(struct CGPoint)arg1 toFindEntryIndex:(long long *)arg2 deflection:(double *)arg3;
- (void)_updateIndexBarIndicator;
- (void)_updateSoftFocusForVelocity:(CDStruct_c3b9c2ee)arg1;
- (void)_endDraggingWithFinalVelocity:(CDStruct_c3b9c2ee)arg1;
- (void)_startScrollingAnimationWithVelocity:(CDStruct_c3b9c2ee)arg1 friction:(struct CGPoint)arg2;
- (CDStruct_c3b9c2ee)_currentScrollViewDecelerationVelocity;
- (void)_startPressDisplayLink;
- (void)_beginDeceleratingAfterPressGesture;
- (void)_pressAnimationHeartbeat:(id)arg1;
- (void)_resetAllPressGestures;
- (void)_setContentOffset:(struct CGPoint)arg1 withVelocity:(CDStruct_c3b9c2ee)arg2;
- (void)_stopPressDisplayLink;
- (void)_finishDecelerating;
- (void)_handleAnimationGroupScrollingAnimations;
- (void)_handleAnimationGroupScrollingCompletionWithInitialVelocity:(struct CGPoint)arg1 bounces:(_Bool)arg2;
- (void)_showDestinationIndicators;
- (void)_handlePressGesture:(id)arg1;
- (void)_beginInitialSwipeDeceleration;
- (void)_startPressTrackingWithVelocity:(CDStruct_c3b9c2ee)arg1;
- (void)_attemptToStopDueToExternalEvent:(_Bool)arg1;
- (void)_stopTrackingMode;
- (void)_cooldownEnded;

@end
