/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CSCoverSheetViewController, NSString, SBDashBoardIdleTimerProvider;

@protocol SBIdleTimerCoordinating;

@interface SBDashBoardIdleTimerController : NSObject

{
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardIdleTimerProvider *_dashBoardIdleTimerProvider;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;

- (void)dealloc;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)resetIdleTimerIfTopMost;
- (void)addIdleTimerDisabledAssertionReason:(id)arg1;
- (void)removeIdleTimerDisabledAssertionReason:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;
- (void)idleTimerDidRefresh:(id)arg1;
- (void)idleTimerDidExpire:(id)arg1;
- (void)idleTimerDidWarn:(id)arg1;
- (void)idleTimerWillRefresh:(id)arg1;
- (id)dashBoardIdleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 reason:(id)arg3;
- (id)requestIdleTimerBehaviorForReason:(id)arg1;
- (void)idleTimerDidChange:(id)arg1;

@end
