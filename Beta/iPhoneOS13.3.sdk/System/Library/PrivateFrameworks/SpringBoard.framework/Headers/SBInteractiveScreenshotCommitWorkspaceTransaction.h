/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSString, NSTimer, NSUUID, SBTransientOverlayViewController;

@protocol SBInteractiveScreenshotCommitWorkspaceTransactionDelegate;

@interface SBInteractiveScreenshotCommitWorkspaceTransaction : SBMainWorkspaceTransaction

{
    _Bool _hasBeganPresentation;
    _Bool _hasFinishedPresentation;
    _Bool _hasQueuedPresentationTransaction;
    _Bool _hasRequestedPlaceholderChromeRemoval;
    _Bool _hasWatchdogExpired;
    NSTimer *_watchdogTimeoutTimer;
    _Bool _hasFinishedFlashAnimation;
    _Bool _hasFinishedSettlingAnimation;
    NSUUID *_gestureSessionID;
    SBTransientOverlayViewController *_screenshotMarkupTransientOverlayViewController;
    id <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> _interactiveScreenshotCommitDelegate;
}

@property (copy, nonatomic, readonly) NSUUID *gestureSessionID;
@property (nonatomic) _Bool hasFinishedFlashAnimation;
@property (nonatomic) _Bool hasFinishedSettlingAnimation;
@property (retain, nonatomic) SBTransientOverlayViewController *screenshotMarkupTransientOverlayViewController;
@property (weak, nonatomic) id <SBInteractiveScreenshotCommitWorkspaceTransactionDelegate> interactiveScreenshotCommitDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_begin;
- (void)_updateState;
- (void)transientOverlayPresentWorkspaceTransactionDidPerformPresentation:(id)arg1;
- (void)_handleWatchdogTimeout;
- (id)initWithTransitionRequest:(id)arg1 gestureSessionID:(id)arg2;

@end
