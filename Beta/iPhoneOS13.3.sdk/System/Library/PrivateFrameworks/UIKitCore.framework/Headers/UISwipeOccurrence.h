/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexPath, NSString, UIContextualAction, UISwipeActionController, UISwipeActionPullView, UIView;

@interface UISwipeOccurrence : NSObject

{
    unsigned int _actionExecutionCounter;
    struct {
        unsigned int isTransitioning:1;
        unsigned int didNotifyWillFinish:1;
        unsigned int didNotifyDidFinish:1;
    } _flags;
    double _swipedViewRestingOffset;
    _Bool _hasAmbiguousIndexPath;
    _Bool _active;
    _Bool _shouldReenableUserInteraction;
    NSIndexPath *_indexPath;
    long long _direction;
    double _offset;
    long long _state;
    double _velocity;
    unsigned long long _configuredDirection;
    UIView *_swipedView;
    UIContextualAction *_currentAction;
    UISwipeActionController *_controller;
    UISwipeActionPullView *_leadingPullView;
    UISwipeActionPullView *_trailingPullView;
    NSDictionary *_swipeDirectionToPullView;
    struct UIEdgeInsets _extraInsets;
    CDStruct_9b6dff2a _currentSwipeInfo;
}

@property (copy, nonatomic) NSIndexPath *indexPath;
@property (nonatomic, readonly) double velocity;
@property (nonatomic, readonly, getter=_hasAmbiguousIndexPath) _Bool hasAmbiguousIndexPath;
@property (nonatomic) unsigned long long configuredDirection;
@property (nonatomic) CDStruct_9b6dff2a currentSwipeInfo;
@property (nonatomic) struct UIEdgeInsets extraInsets;
@property (retain, nonatomic) UIView *swipedView;
@property (retain, nonatomic) UIContextualAction *currentAction;
@property (nonatomic) _Bool active;
@property (nonatomic) _Bool shouldReenableUserInteraction;
@property (weak, nonatomic) UISwipeActionController *controller;
@property (retain, nonatomic) UISwipeActionPullView *leadingPullView;
@property (retain, nonatomic) UISwipeActionPullView *trailingPullView;
@property (retain, nonatomic) NSDictionary *swipeDirectionToPullView;
@property (nonatomic, readonly) long long direction;
@property (nonatomic) double offset;
@property (nonatomic, readonly) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)updateLayout;
- (void)updateOffsetWithSwipeInfo:(CDStruct_9b6dff2a)arg1 isTracking:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setHasAmbiguousIndexPath;
- (void)_transitionToState:(long long)arg1;
- (void)_forceTeardown;
- (id)initWithController:(id)arg1 indexPath:(id)arg2;
- (void)updateSwipedView;
- (CDStruct_324b76a9)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2;
- (_Bool)shouldDismissWithTouchLocation:(struct CGPoint)arg1;
- (void)beginSwipe;
- (void)performPrimaryActionWithSwipeInfo:(CDStruct_9b6dff2a)arg1;
- (struct CGRect)swipedViewRestingFrame;
- (id)_pullViewForSwipeDirection:(unsigned long long)arg1;
- (void)_resetPullViewsImmediately;
- (void)_updatePullView:(id)arg1;
- (void)endSwipe;
- (void)_resetItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 animated:(_Bool)arg2 deletion:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_moveItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_extraOffsetForOffset:(double)arg1 withDirection:(unsigned long long)arg2;
- (void)_updateLayoutUsingCurrentSwipeInfo:(_Bool)arg1;
- (void)_performSwipeAction:(id)arg1 inPullView:(id)arg2 swipeInfo:(CDStruct_9b6dff2a)arg3;
- (unsigned long long)_swipeDirectionForPullView:(id)arg1;
- (void)_executeLifecycleForPerformedAction:(id)arg1 sourceView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_createPullViewsIfNeeded;
- (struct CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3;
- (id)_actionView;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (id)actionView;
- (id)lockActionViewForAnimation;
- (void)unlockActionViewForAnimation:(id)arg1;

@end
