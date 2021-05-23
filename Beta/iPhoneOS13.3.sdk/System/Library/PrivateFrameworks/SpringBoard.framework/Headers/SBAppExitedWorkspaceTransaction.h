/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@interface SBAppExitedWorkspaceTransaction : SBToAppsWorkspaceTransaction

- (void)_begin;
- (void)_didComplete;

@end
