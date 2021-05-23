/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBInCallTransientOverlayManager : NSObject

- (id)_remoteTransientOverlaySessionManager;
- (id)_newAlertDefinition;
- (void)presentTransientOverlay;
- (void)presentTransientOverlayFromLockScreen;
- (void)presentTransientOverlayForActivityContinuationWithActivityIdentifier:(id)arg1;
- (void)presentTransientOverlayForUILock;

@end
