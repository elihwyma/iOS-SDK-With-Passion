/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@class BKSDisplayRenderOverlay, BSTransaction, NSString, SBWindow;

@interface SBUIStartupToLoginWindowAnimationController : SBUIMainScreenAnimationController

{
    SBWindow *_transitionWindow;
    BKSDisplayRenderOverlay *_persistentSnapshotOverlay;
    BSTransaction *_waitForLoginAppToFinishLaunchingTransaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_setHidden:(_Bool)arg1;
- (id)animationSettings;
- (void)_startAnimation;
- (void)_cleanupAnimation;
- (id)initWithTransitionContextProvider:(id)arg1 overlay:(id)arg2;
- (id)initWithTransitionContextProvider:(id)arg1;
- (id)_getTransitionWindow;
- (_Bool)_shouldDismissBanner;
- (void)loginAppDidFinishLaunching:(id)arg1;

@end
