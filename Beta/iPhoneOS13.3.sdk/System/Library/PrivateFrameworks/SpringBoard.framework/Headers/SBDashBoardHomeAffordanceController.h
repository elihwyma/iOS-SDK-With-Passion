/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSAnimationSettings, NSString, SBNotificationHomeAffordanceController, UIPanGestureRecognizer;

@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBDashBoardHomeAffordanceController : NSObject

{
    SBNotificationHomeAffordanceController *_notificationHomeAffordanceController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIPanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;

- (id)init;
- (void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
- (void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
- (id)keyboardAssertionForGestureWindow:(id)arg1;

@end
