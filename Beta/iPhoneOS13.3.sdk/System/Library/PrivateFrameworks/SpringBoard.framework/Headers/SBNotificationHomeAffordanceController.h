/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSAnimationSettings, NSMapTable, SBHomeGesturePanGestureRecognizer, SBScreenEdgePanGestureRecognizer;

@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBNotificationHomeAffordanceController : NSObject <Swift>

{
    NSMapTable *_clientsToParticipants;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGesture;
}

@property (nonatomic, readonly) SBScreenEdgePanGestureRecognizer *screenEdgePanGesture;
@property (nonatomic, readonly) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;
@property (nonatomic, readonly) id <UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;

+ (id)sharedInstance;

- (void)registerClient:(id)arg1 withIdentifier:(long long)arg2;
- (void)unregisterClient:(id)arg1 withIdentifier:(long long)arg2;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;

@end
