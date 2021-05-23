/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@protocol PLExpandableViewDelegate;

@interface PLExpandableView : UIView

{
    id <PLExpandableViewDelegate> _delegate;
    CDUnknownBlockType _collapsingCompletionHandler;
    CDUnknownBlockType _expansionCompletionHandler;
    struct CGRect _contractedFrame;
    struct CGRect _expandedFrame;
    struct CGPoint _leftTouchLocation;
    struct CGPoint _rightTouchLocation;
    struct CGPoint _previousLeftLocation;
    struct CGPoint _previousRightLocation;
    unsigned long long _leftTouchIndex;
    unsigned long long _rightTouchIndex;
    double _pinchVelocity;
    double _trackingTimeInterval;
    double _expansionFraction;
    struct {
        unsigned int state:3;
        unsigned int prevState:3;
        unsigned int tracking:1;
        unsigned int autorotationDisabled:1;
        unsigned int animationDisabled:1;
        unsigned int updateContractedFrame:1;
        unsigned int updateExpandedFrame:1;
        unsigned int allowsExpansion:1;
        unsigned int delegateWillBeginExpanding:1;
        unsigned int delegateWillCompleteExpanding:1;
        unsigned int delegateDidCompleteExpanding:1;
        unsigned int delegateWillCancelExpanding:1;
        unsigned int delegateDidCancelExpanding:1;
        unsigned int delegateDidBeginCollapsing:1;
        unsigned int delegateWillCompleteCollapsing:1;
        unsigned int delegateDidCompleteCollapsing:1;
        unsigned int delegateWillCancelCollapsing:1;
        unsigned int delegateDidCancelCollapsing:1;
        unsigned int delegateExpandedFractionChanged:1;
    } _expandFlags;
}

@property (nonatomic) struct CGRect contractedFrame;
@property (nonatomic) struct CGRect expandedFrame;
@property (nonatomic) _Bool allowsExpansion;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)state;
- (int)previousState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isTracking;
- (void)finishTransition;
- (void)stateDidChangeFrom:(int)arg1;
- (void)beginTrackingPinch:(id)arg1;
- (float)continueTrackingPinch:(id)arg1;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)_setAutorotationDisabled:(_Bool)arg1;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyDidCancelCollapsing;
- (void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2;
- (void)setState:(int)arg1 withDuration:(double)arg2;
- (void)stateWillChangeTo:(int)arg1;
- (void)notifyExpansionFraction:(float)arg1 force:(_Bool)arg2;
- (void)startedPinch:(id)arg1;
- (void)continuedPinch:(id)arg1;
- (void)finishedPinch:(id)arg1;
- (void)canceledPinch:(id)arg1;
- (void)finishTransitionToState:(int)arg1;
- (int)snapState:(_Bool)arg1;
- (void)updatePinchState:(id)arg1;
- (struct CGRect)pinchRect:(struct CGRect)arg1 inView:(id)arg2 insetTouches:(_Bool)arg3;
- (void)collapseWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)expandWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setExpansionFraction:(double)arg1;
- (double)expansionFraction;
- (_Bool)_canPinch;
- (_Bool)canCollapse;

@end
