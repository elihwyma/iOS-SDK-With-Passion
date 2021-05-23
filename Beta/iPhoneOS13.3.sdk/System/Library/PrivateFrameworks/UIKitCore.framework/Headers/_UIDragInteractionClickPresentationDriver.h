/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDragInteractionDriver.h>

@class NSSet, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver

{
    NSSet *_touches;
    CDUnknownBlockType _itemIterator;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _liftCompletion;
    UIDelayedAction *_delayedLift;
}

- (void)cancel;
- (void)_performDelayedLift;
- (void)didTransitionToBeginState;
- (void)didTransitionToInactiveState;
- (_Bool)canBeginLiftAtLocation:(struct CGPoint)arg1;
- (_Bool)isPreparingToDrag;
- (_Bool)isLifted;
- (void)beginLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(_Bool)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginDragWithTouches:(id)arg1 itemIterator:(CDUnknownBlockType)arg2 beginningSessionHandler:(CDUnknownBlockType)arg3;
- (void)didTransitionToInflightState;

@end
