/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class FBKVOController, NSMutableDictionary, NSMutableSet, NSPointerArray;

@interface WFDragGestureRecognizer : UIGestureRecognizer

{
    NSMutableDictionary *_dragDirections;
    NSMutableSet *_allowedClassHeirarchies;
    NSMutableSet *_ignoredClassHeirarchies;
    struct CGPoint _start;
    NSPointerArray *_touches;
    FBKVOController *_scrollController;
    double _lastTouchTimestamp;
    struct WFDragVelocitySample _previousVelocitySample;
    struct WFDragVelocitySample _currentVelocitySample;
    double _minimumPressDuration;
    double _allowableMovement;
}

@property (nonatomic) double minimumPressDuration;
@property (nonatomic) double allowableMovement;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)velocityInView:(id)arg1;
- (_Bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (unsigned long long)numberOfTouches;
- (struct CGPoint)locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (void)setPermittedDragDirections:(unsigned long long)arg1 forHorizontalSizeClass:(long long)arg2;
- (void)ignoreViewsWithClassHeirarchy:(Class)arg1;
- (void)acceptViewsWithClassHeirarchy:(Class)arg1;
- (void)startObservingScrollView:(id)arg1;
- (void)addTouches:(id)arg1;
- (void)removeTouches:(id)arg1;
- (void)longPressTimeoutTriggered;

@end
