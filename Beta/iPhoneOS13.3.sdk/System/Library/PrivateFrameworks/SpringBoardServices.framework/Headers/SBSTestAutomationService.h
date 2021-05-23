/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <SpringBoardServices/SBSAbstractSystemService.h>

@interface SBSTestAutomationService : SBSAbstractSystemService

- (void)suspendAllDisplays;
- (void)setAlertsEnabled:(_Bool)arg1;
- (void)setIdleTimerEnabled:(_Bool)arg1;
- (void)setOrientationLockEnabled:(_Bool)arg1;
- (void)resetToHomeScreenAnimated:(_Bool)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1 blockedForScreenTime:(_Bool)arg2;
- (void)setTestRunnerRecoveryApplicationBundleIdentifier:(id)arg1;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1;
- (void)countScenesForBundleIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
