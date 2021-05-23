/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSMonotonicReferenceTime, FBScene, NSHashTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, SBAsynchronousRenderingAssertion, SBInteractiveScreenshotCommitWorkspaceTransaction, SBInteractiveScreenshotScreenEdgePanGestureRecognizer, SBInteractiveScreenshotSettings, SBMainDisplayWorkspaceAppInteractionEventSource, SBMainWorkspace, SBSystemGestureManager, UIScreen;

@protocol BSInvalidatable, SBInteractiveScreenshotGestureManagerDelegate;

@interface SBInteractiveScreenshotGestureManager : NSObject <Swift>

{
    NSUUID *_activeGestureSessionID;
    SBMainDisplayWorkspaceAppInteractionEventSource *_appInteractionEventSource;
    SBAsynchronousRenderingAssertion *_asynchronousRenderingAssertion;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer *_bottomLeftGestureRecognizer;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer *_bottomRightGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction *_commitTransaction;
    id <BSInvalidatable> _commitTransactionDisableGestureAssertion;
    NSMutableSet *_disableGestureAssertions;
    _Bool _hasInitiatedCommit;
    _Bool _isCapturingScreenshot;
    BSMonotonicReferenceTime *_lastApplicationTouchReferenceTime;
    NSMutableArray *_pendingCommitWorkspaceTransactionBlocks;
    UIScreen *_screen;
    NSMutableDictionary *_sessionIDToSession;
    SBInteractiveScreenshotSettings *_settings;
    FBScene *_sourceScene;
    SBSystemGestureManager *_systemGestureManager;
    NSHashTable *_weakReusableGestureRootWindows;
    SBMainWorkspace *_workspace;
    id <SBInteractiveScreenshotGestureManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBInteractiveScreenshotGestureManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_invalidateSessionID:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)initWithScreen:(id)arg1 sourceScene:(id)arg2 workspace:(id)arg3 systemGestureManager:(id)arg4 appInteractionEventSource:(id)arg5;
- (_Bool)handleRemoteTransientOverlayPresentationRequest:(id)arg1 forSession:(id)arg2;
- (id)acquireDisableGestureAssertionWithReason:(id)arg1;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (void)interactiveScreenshotGestureRootViewController:(id)arg1 gestureDidCompleteWithIntent:(long long)arg2;
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg1;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg1;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg1;
- (void)_handleInteractiveScreenshotGesture:(id)arg1;
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg1;
- (id)_screenshotPresentationOptions;
- (void)_performCommitWorkspaceTransactionBlock:(CDUnknownBlockType)arg1;

@end
