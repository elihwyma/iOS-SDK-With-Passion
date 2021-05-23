/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class SBBarSwipeAffordanceView, SBHomeGestureParticipant;

@interface SBBarSwipeAffordanceViewController : UIViewController <Swift>

{
    long long _homeGestureParticipantIdentifier;
    SBHomeGestureParticipant *_homeGestureParticipant;
    _Bool _wantsToBeActiveAffordance;
    _Bool _suppressAffordance;
}

@property (retain, nonatomic) SBBarSwipeAffordanceView *view;
@property (nonatomic) _Bool wantsToBeActiveAffordance;
@property (nonatomic) _Bool suppressAffordance;

- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)_updateActiveState;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (void)_beginTryingToBecomeActiveAffordance;
- (void)_stopTryingToBecomeActiveAffordance;
- (id)initWithHomeGestureParticipantIdentifier:(long long)arg1;

@end
